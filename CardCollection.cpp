#include "CardCollection.h"

CardCollection::CardCollection(vector<string> _cardList)
{
  cardList= _cardList;
}
void CardCollection::addCard(string card)
{
  cardList.push_back(card);
}