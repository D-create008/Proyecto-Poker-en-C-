#include "CardCollection.h"

CardCollection::CardCollection(vector<string> _cardList) //Constructor that initializes cardList
{
  cardList= _cardList;
}
void CardCollection::addCard(string card)  //Ads a card to your card list
{
  cardList.push_back(card);
}
