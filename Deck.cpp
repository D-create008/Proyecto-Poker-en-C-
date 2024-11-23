#include "Deck.h"
#include <random>
#include <algorithm>

Deck::Deck() : CardCollection(vector<string>())
{
  deckSize = 0;
}
void Deck::createDeck()
{
  string palo[4] = {"♥","♦","♣","♠"};
  string simbolo[13] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
  //Makes the deck by using a for loop and adding each suit to each rank once
  for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
      addCard(simbolo[j]+palo[i]);
    }
  }  
  //Current deck size when made
  deckSize = 52;
}
void Deck::shuffleDeck() //Uses the shuffle vector algorithm and a random device to shuffle the elements in the deck vector
{
  random_device rd; 
  default_random_engine gen(rd()); 
  shuffle(cardList.begin(), cardList.end(), gen); 
}

string Deck::dealCard(){    //Deals a card and removes it from the deck
  string card = cardList.back();
  cardList.pop_back();
  //Modify deck size to match its current value
  deckSize = deckSize - 1;
  //Returns a card 
  return card;
}
void Deck:: clearDeck(){  //Clears deck
  cardList.clear();
}

