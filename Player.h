#ifndef PLAYER_H
#define PLAYER_H

class Player{
  private:
    string name;
    int balance;
    int currentBet;
  public:
    Player();
    void setName(string);
    void setBalance(int);
    void makeBet(int);
    int getBet();
    int getBalance();
};
#endif
