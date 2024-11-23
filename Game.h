#include <string>
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game{
  private:
    Player player;
    Deck deck;
    Hand hand;
  public:
    Game(Player, Deck, Hand);
    void startGame();
};
#endif
