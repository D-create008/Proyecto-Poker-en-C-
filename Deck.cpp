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
  for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
      addCard(palo[i]+simbolo[j]);
    }
  }  
  deckSize = 52;
}
void Deck::shuffleDeck()
{
  random_device rd; 
  default_random_engine gen(rd()); 
  shuffle(cardList.begin(), cardList.end(), gen); 
}

string Deck::dealCard(){
  string card = cardList.back();
  cardList.pop_back();
  deckSize = deckSize - 1;
  return card;
}

