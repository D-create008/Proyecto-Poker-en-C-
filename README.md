# Video Poker game in C++
Playable video poker game using object oriented programing
Context: 
Video poker is a game where players try to form the best possible poker hand possible, following the "Jacks or Better" rules, which requires at least a pair of Jacks to win a certian amount of money. The game begins with players being dealt five cards, and they have a total of one round to choose which cards to keep and which to swap for another random card from the deck. After the swaps have all been completed, a player is left with his final hand. The hand is then evaluated based on a standard poker ranking chart, and how much the player wins varies according to the strength of the final hand, with higher rewards for stronger hands like royal flushes or full houses.
Why this project is interesting:
This project is interesting because it involves object oriented programing through using classes such as hand, deck, or player, as well as being an interesting game from a statistical point of view, taking into consideration the likelyhood of a player to win and basing the payouts on those probabilities.
The classes included for this project are as follows: 
1) Game class, which basically is the creation of a game itself, along with its components, that are a Player, a Deck, and a Hand, which are included into Game through composition.
2) Card Collection class, this class serves as a superclass for both Deck and Hand, since both are card collections, and the methods and attributes they have in common can be programmed in Card Collection.
3) Deck class, this class is responsible mainly for creating and shuffling the deck that will be used in a game, as well as dealing cards to the Hand.
4) Hand class, this class si responsible for storing a player's hand, as well as replacing cards in the hand with new cards from the deck.
5) Player class, this class is responsible for storing a player's current balance, as well as managing the bets the player makes and the payout that they recieve.

![Blank diagram](https://github.com/user-attachments/assets/8b014f30-62ca-4fe6-b1be-0ff5578f1be2)
