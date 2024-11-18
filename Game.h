#include <string>
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game{
  private:
    Player player;
    Deck deck;
    Hand hand;
  public;
    void beginGame();
    void playGame();
};
#endif