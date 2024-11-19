#include "Player.h"

Player:: Player(string _name, float _balance, float _currentBet){
  name = _name;
  balance = _balance;
  currentBet = _currentBet;
}
void Player:: setName(string _name){
  name = _name;
}
void Player:: setBalance(float _balance){
  balance = _balance;
}
void Player:: setBet(float _currentBet){
  currentBet = _currentBet;
}
float Player:: getBalance(){
  return balance;
}