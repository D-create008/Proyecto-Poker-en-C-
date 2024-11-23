#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player{
  private:
    string name;
    int balance;
    int currentBet;
  public:
    Player();
    void setName(string);   //Setters to set the name, balance, and bet
    void setBalance(int);
    void makeBet(int);
    int getBet();          //Getters to retrieve the current balance and bet
    int getBalance();
};
#endif
