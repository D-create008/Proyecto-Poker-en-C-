#include "CardCollection.h"
#include <vector>
#include <string>
using namespace std;

#ifndef HAND_H
#define HAND_H

class Hand: public CardCollection{
  private:
    int handSize;
    vector<string> hand;
  public:
    Hand();
    void replaceCard(int);
    vector<string> getHand();
    void showHand();
    float evaluateHand();
}