#include "Game.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>

Game::Game(player _player1, deck _deck1, hand _hand1){
  player1 = _player1;
  deck1 = _deck1;
  hand1 =  _hand1;
}
void Game::beginGame(){
  string name;
  cout<<"Ingrese el nombre del jugador 1: "<<endl;
  cin>> name;
  player1.setName(name);
  player1.setBalance(300.0);
  deck1.createDeck();
  deck1.shuffleDeck();
  hand1.getHand();
}
void Game::playGame(){
  
}