#include <string>
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game{
  private:
    Player player;   //Atributes are the objects included through composition
    Deck deck;
    Hand hand;
  public:
    Game(Player, Deck, Hand);  //Game constructor
    void startGame();      //Method to start game
};
#endif
