const readline = require('readline');
const Game = require('./js/player.js');
const Locations = require('./js/location.js');

let player = new Game.Player(Locations[0]);
let gameState = new Game.GameState(Locations[0],Locations);

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

console.log(player.location.name);
console.log(player.location.desc);

rl.on('line', (input) => {
  input=input.toLowerCase();
  if(input === "north") player.move(gameState,"y",1,Locations);
  if(input === "south") player.move(gameState,"y",-1,Locations);
  if(input === "east") player.move(gameState,"x",1,Locations);
  if(input === "west") player.move(gameState,"x",-1,Locations);
  if(input === "look") gameState.look();
  if(input.includes("enter")){
    //let final = input[1] === "house" ? input[1] : null;
    gameState.enter(Locations[4],player);
  }
  if(input.includes("open")){
    //let final = input[1] === "door" ? input[1] : null;
    gameState.open();
  }
  if(input.includes("leave")){
    //let final = input[1] === "house" ? input[1] : null;
    gameState.leave(Locations[3],player);
  }
  if(input === "kitchen") player.move(gameState, "kitchen", null,Locations);
  if(input === "bedroom") player.move(gameState, "bedroom", null,Locations);
  if(input === "living room") player.move(gameState,"living room",null,Locations);
  if(input === "exit") rl.close();
  console.log(player.location.name);
  console.log(player.location.desc);
});
