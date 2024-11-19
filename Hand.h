#include "CardCollection.h"
#include "Deck.h"
#include <vector>
#include <string>
using namespace std;

#ifndef HAND_H
#define HAND_H

class Hand: public CardCollection{
  private:
    int handSize;
  public:
    Hand();
    void replaceCard(int, Deck& deck);
    void getHand(Deck& deck);
    void showHand();
    float evaluateHand();
};
#endif
