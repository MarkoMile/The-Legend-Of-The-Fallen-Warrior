class Location {
  constructor(name, desc, stuff, connectedTo, x, y){
    this.name=name;
    this.desc=desc;
    this.stuff=stuff;
    this.connectedTo=connectedTo;
    this.x=x;
    this.y=y;
  }
}
class LocationObject {
  constructor(name, side){
    this.name=name;
    this.side=side;
  }
}
const locationsArray = [
  new Location("SOUTH OF HOUSE","You find yourself in a small valley, surrounded by mountains and a house to your north.",[new LocationObject("a sign","north"), new LocationObject("a house","north"),new LocationObject("mountains","south")],null,0,0),
  new Location("EAST OF HOUSE","You are in a field. You see a small hole. There is an old fence with a hole in it to your north. There's a window on the house.",[new LocationObject("a small hole","north"),new LocationObject("an old fence","north"),new LocationObject("a window on the house","west")],null,1,1),
  new Location("WEST OF HOUSE","You are in the garden of the house. There is an old fence to your north. There is a brick wall to your west. You see a window on the house.",[new LocationObject("an evil scarecrow","north"),new LocationObject("an old fence","north"),new LocationObject("a brick wall", "west")],null,1,-1),
  new Location("NORTH OF HOUSE","You are in a field, in front of the house. There is a big hole to your north. You see a door on the house.",[new LocationObject("a big hole","north"), new LocationObject("a door", "south")],null,2,0),
  new Location("KITCHEN","There is a cupboard with some water bottles. There is a table with an old DULL KNIFE on it. There is a door to the bedroom and a door to the living room.",[new LocationObject("a cupboard with some water bottles",null),new LocationObject("a table with an old DULL KNIFE on it.",null),new LocationObject("a door to the bedroom",null), new LocationObject("a door to the living room",null)],null,1,0),
  new Location("BEDROOM","There is a bed and a book shelf with a DUSTY BOOK on it.",[new LocationObject("a bed",null),new LocationObject("a book shelf with a dusty book on it", null)],null,1,0),
  new Location("LIVING ROOM","This room is very messy. It looks like someone left in a rush.",null,null,1,0)
];

locationsArray[0].connectedTo=[{location:locationsArray[1],direction:"x",delta:1},{location:locationsArray[2],direction:"x",delta:-1}];
locationsArray[1].connectedTo=[{location:locationsArray[0],direction:"y",delta:-1},{location:locationsArray[3],direction:"y",delta:1}];
locationsArray[2].connectedTo=[{location:locationsArray[0],direction:"y",delta:-1}];
locationsArray[3].connectedTo=[{location:locationsArray[1],direction:"y",delta:-1},{location:locationsArray[4],direction:null,delta:null}];
locationsArray[4].connectedTo=[{location:locationsArray[5],direction:null,delta:null},{location:locationsArray[6],direction:null,delta:null}];
locationsArray[5].connectedTo=[{location:locationsArray[4],direction:null,delta:null},{location:locationsArray[6],direction:null,delta:null}];
locationsArray[6].connectedTo=[{location:locationsArray[4],direction:null,delta:null},{location:locationsArray[5],direction:null,delta:null}];

module.exports = locationsArray;
