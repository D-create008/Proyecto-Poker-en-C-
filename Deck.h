#include "CardCollection.h"
#include <vector>
#include <string>
using namespace std;

#ifndef DECK_H
#define DECK_H

class Deck: public CardCollection{
  private:
    int deckSize;
    vector<string> deck;
  public:
    Deck();
    void createDeck();
    void shuffleDeck();
};
#endif