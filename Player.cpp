#include "Player.h"

Player:: Player(){      //Constructor for player, declares the name, sets the balance to 100, and declares the current bet variable
  name = "To be set"; 
  balance = 100;
  currentBet = 0;
}
void Player:: setName(string _name){  //Setter for name
  name = _name;
}
void Player:: setBalance(int _balance){  //Setter for balance
  balance = _balance;
}
void Player:: makeBet(int _currentBet){    //Setter for bet, but called makeBet
  currentBet = _currentBet;
}
int Player::getBet() {           //Getter for bet, retrieves the current bet
    return currentBet;
}
int Player:: getBalance(){       //Getter for balance, retrieves the current balance
  return balance;
}
