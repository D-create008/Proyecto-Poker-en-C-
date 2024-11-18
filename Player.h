#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player{
  private:
    string name;
    float balance;
    float currentBet;
  public:
    Player(string, float, float);
    void setName(string);
    void setBalance(float);
    void makeBet(float);
    float getBalance();
}