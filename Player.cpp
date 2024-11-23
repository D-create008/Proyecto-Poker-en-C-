#include "Player.h"

Player:: Player(){
  name = "To be set";
  balance = 100;
  currentBet = 0;
}
void Player:: setName(string _name){
  name = _name;
}
void Player:: setBalance(int _balance){
  balance = _balance;
}
void Player:: makeBet(int _currentBet){
  currentBet = _currentBet;
}
int Player::getBet() {
    return currentBet;
}
int Player:: getBalance(){
  return balance;
}
