#include "Hand.h"
#include "Deck.h"
#include <iostream>
using namespace std;

Hand::Hand(vector<string> _cardList) : CardCollection(_cardList){
  handSize = 5;
}

void Hand::getHand(){
  for(int i=0; i<handSize; i++)
    hand.push_back(deck.cardList.back()); 
    deck.cardList.pop_back();
}

void Hand::replaceCard(int cambio){
  if (cambio<0 || cambio>4)
    cout<<"No se puede cambiar esa carta"<<endl;
  hand[cambio] = deck.cardList.back();
  deck.cardList.pop_back();
}

void Card::showHand(){
  cout<<hand<<endl
}

float Card::evaluateHand(){
  
}