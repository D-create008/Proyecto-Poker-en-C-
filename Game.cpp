#include "Game.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>

Game::Game(Player _player, Deck _deck, Hand _hand){   //Constructor that also initializes an instance of player, deck, and hand
  player = _player;
  deck = _deck;
  hand =  _hand;
}
void Game::startGame(){   //Starts game by declaring keepPlaying as true, to be used in main
   bool keepPlaying = true;
}
