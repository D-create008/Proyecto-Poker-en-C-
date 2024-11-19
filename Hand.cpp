#include "Hand.h"
#include "Deck.h"
#include <iostream>
using namespace std;

Hand::Hand() : CardCollection(vector<string>()){
  handSize = 5;
}

void Hand::getHand(Deck& deck){
  for(int i=0; i<handSize; i++){
    string card = deck.dealCard();
    addCard(card);
  }    
}

void Hand::replaceCard(int cambio, Deck& deck){
  cardList[cambio] = deck.dealCard();
}

void Hand::showHand(){
  for (const auto& card : cardList) {
      cout << card << " ";  
  }
  cout << endl; 

}

float Hand::evaluateHand(){
  return 0.0;
}
