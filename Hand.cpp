#include "Hand.h"
#include "Deck.h"
#include <iostream>
#include <vector>
#include <algorithm>
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

int Hand::evaluateHand(){
  vector<string> hand = cardList;
  vector<int> rank ;
  vector<string> suit;
  string r;
  for(int i=0; i<handSize; i++){
    string card = hand[i];
    if (isdigit(card[0]) && isdigit(card[1])) {
        r = card.substr(0, 2); 
        suit.push_back(card.substr(2));      
    } else {
        r = card.substr(0, 1);             
        suit.push_back(card.substr(1));      
    }
    if(r == "A"){
      rank.push_back(14);
    }
    else if(r == "K"){
      rank.push_back(13);
    }
    else if(r == "Q"){
      rank.push_back(12);
    }
    else if(r == "J"){
      rank.push_back(11);
    }
    else {
      rank.push_back(stoi(r));
    }
  }
  sort(rank.begin(), rank.end(), greater<int>());
  bool isFlush = true;
  bool isStraight = true;
  bool isRoyalStraight = false;
  
  for(int i=0; i<handSize; i++){
    if(suit[0] != suit[i]){
      isFlush = false;
    }
  }
  for(int i=0; i<4; i++){
    if(rank[i] != rank[i+1]+1){
      isStraight = false;
    }
  }
  if(rank == vector<int>{14,13,12,11,10}){
    isRoyalStraight = true;
  }
  else if(rank == vector<int>{14,5,4,3,2}){
    isStraight = true;
  }

  if(isRoyalStraight && isFlush){
    return 250;
  }
  if(isStraight && isFlush){
    return 50;
  }
  if(isFlush){
    return 6;
  }
  if(isStraight){
    return 4;
  }

  vector<int> repsUnsorted;
  vector<int> reps;
  int repNumber;
  for(int i=0; i<handSize; i++){
    repNumber = 0;
    for(int j=0; j<handSize; j++){
      if(rank[i] == rank[j]){
        repNumber = repNumber+1;
      }
    }
    repsUnsorted.push_back(repNumber);
  }
  reps = repsUnsorted;
  sort(reps.begin(), reps.end(), greater<int>());
  bool isPokers = false;
  bool isFullHouse = false;
  bool isTrio = false;
  bool isTwoPair = false;
  bool isPair = false;
  if(reps == vector<int>{4,4,4,4,1}){
    isPokers = true;
  }
  if(reps == vector<int>{3,3,3,2,2}){
    isFullHouse = true;
  }
  if(reps == vector<int>{3,3,3,1,1}){
    isTrio = true;
  }
  if(reps == vector<int>{2,2,2,2,1}){
    isTwoPair = true;
  }
  if(reps == vector<int>{2,2,1,1,1}){
    isPair = true;
  }

  if(isPair){
    for(int i=0; i<handSize; i++){
      if(repsUnsorted[i] == 2){
        if(rank[i] < 11){
          isPair = false;
        }
      }
    }
  }

  if(isPokers){
    return 25;
  }
  if(isFullHouse){
    return 9;
  }
  if(isTrio){
    return 3;
  }
  if(isTwoPair){
    return 2;
  }
  if(isPair){
    return 1;
  }
  return 0;
  
}
void Hand::clearHand(){
  cardList.clear();
}
