#include "CardCollection.h"
#include "Deck.h"
#include <vector>
#include <string>
using namespace std;

#ifndef HAND_H
#define HAND_H

class Hand: public CardCollection{
  private:
    int handSize;     //Hand size is an attribute, as well as cardList by inheritance
  public:
    Hand();
    void replaceCard(int, Deck& deck);   //Method to replace a card in the Hand
    void getHand(Deck& deck);       //Method to get the starting hand
    void showHand();     //Method to print the current hand
    int evaluateHand();    //Method to evaluate the strength of the hand
    void clearHand();   //Method to empty the hand vector for the next round
};
#endif
