class Player {
  constructor(location){
    this.location=location;
  }
  move(gameState,direction,delta,locations){
    let newLocation;
    if(delta!==null){
      if(gameState.isAllowed(direction,delta)){
        this.location.connectedTo.forEach((item, i) => {
          if(item.direction===direction && item.delta===delta){
            newLocation=item.location;
          }
        });
        this.location=newLocation;
        gameState.curLocation=this.location;
      }else{
        console.error("Not allowed!");
      }
    }else{
      if(["BEDROOM","LIVING ROOM","KITCHEN"].includes(this.location.name)){
        locations.forEach((item, i) => {
          if(item.name===direction.toUpperCase()){
            newLocation=item;
          }
        });
        this.location=newLocation;
        gameState.curLocation=this.location;
      }else{
        console.error("Not allowed!");
      }
    }
  }
}

class GameState {
  constructor(curLocation, locations){
    this.curLocation=curLocation;
    this.locations=locations;
    this.doorOpen=false;
  }
  isAllowed(direction,delta){
    if(this.curLocation.name==="SOUTH OF HOUSE" && direction==="y") return false;
    if(this.curLocation.name==="EAST OF HOUSE" && direction==="x") return false;
    if(this.curLocation.name==="WEST OF HOUSE" && (direction==="x" || (direction==="y" && delta===1))) return false;
    if(this.curLocation.name==="NORTH OF HOUSE" && (direction==="y" && delta===1)) return false;
    if(this.curLocation.name==="KITCHEN" && (direction!=="y" || (direction===y && delta!==1))) return false;
    if(this.curLocation.name==="BEDROOM" || this.curLocation.name==="LIVING ROOM") return false;
    return true;
  }
  look(){
    return;
  }
  open(door){
    if(this.curLocation.stuff.some(e => e.name==="a door" && e.side==="south")){
      this.doorOpen=true;
      console.info("Success:","You opened the door!");
    }else{
      console.error("No doors around.");
    }
  }
  enter(location,player){
    if(this.curLocation.name==="NORTH OF HOUSE" && this.doorOpen){
      console.info("Success:","You entered the house!");
      this.curLocation=location;
      player.location=location;
    }else{
      console.error("Not allowed!");
      if(this.curLocation.name!=="NORTH OF HOUSE") console.info("Hint:","You have to find the door, first.");
      if(this.curLocation.name==="NORTH OF HOUSE") console.info("Hint:","Try opening the door.");
    }
  }
  leave(location,player){
    if((this.curLocation.name==="LIVING ROOM" || this.curLocation.name==="BEDROOM" || this.curLocation.name==="KITCHEN") && this.doorOpen){
      console.info("Success:","You left the house!");
      this.curLocation=location;
      player.location=location;
    }else{
      console.error("Not allowed!");
      if((this.curLocation.name==="LIVING ROOM" || this.curLocation.name==="BEDROOM" || this.curLocation.name==="KITCHEN") && !(this.doorOpen)) console.info("Hint:","Try opening the door.");
      if(!(this.curLocation.name==="LIVING ROOM" || this.curLocation.name==="BEDROOM" || this.curLocation.name==="KITCHEN")) console.info("Hint:","You are already outside the house.");
    }
  }
}
module.exports = {Player,GameState};
