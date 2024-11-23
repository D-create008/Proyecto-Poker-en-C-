#include "CardCollection.h"
#include <vector>
#include <string>
using namespace std;

#ifndef DECK_H
#define DECK_H

class Deck: public CardCollection{
  private:
    int deckSize;  //Though no real aplication of deckSize is used, its an important attribute for order, and thinking of future modifications to, for example, print the deck
  public:
    Deck();
    void createDeck();  //Creates a deck
    void shuffleDeck();  //Shuffles the created deck
    string dealCard();   //Deals the last card from the deck
    void clearDeck();  //Clears the current deck, to be able to make and shuffle a new deck for the next rounf
};
#endif
