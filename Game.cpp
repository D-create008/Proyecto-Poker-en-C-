#include "Game.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>

Game::Game(Player _player, Deck _deck, Hand _hand){
  player = _player;
  deck = _deck;
  hand =  _hand;
}
void Game::startGame(){
   bool keepPlaying = true;
}
