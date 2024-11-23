#include <iostream>
#include "Deck.cpp"
#include "Hand.cpp"
#include "Player.cpp"
#include "Game.cpp"
#include "CardCollection.cpp"

using namespace std;

int main() {
    Player player;
    Deck deck;
    Hand hand; 

    Game game(player, deck, hand);
    string name;
    bool keepPlaying = true;
    cout<<"Ingrese el nombre del jugador 1: "<<endl;
    cin>> name;
  
    player.setName(name);
    game.startGame();
    int bet;
    cout<<"Your balance: "<<player.getBalance();
    cout<<endl;
    while(keepPlaying && player.getBalance() > 0){
        deck.clearDeck();
        deck.createDeck();
        deck.shuffleDeck();
        hand.clearHand();
        hand.getHand(deck);
        cout<<"Make your bet"<<endl;
        cin>>bet;
        while(bet>5 || bet>player.getBalance() || bet<=0){
        cout<<"Invalid bet, bet must be 5 or less and equal or less to your balance"<<endl;
        cin>>bet;
        }
        player.makeBet(bet);
        player.setBalance(player.getBalance()-bet);
        cout << "Player's Hand: " << endl;
        hand.showHand();
        int numReplacements;
        cout << "Cards to replace? (0-5): ";
        cin >> numReplacements;

        for (int i = 0; i < numReplacements; ++i) {
            int cardIndex;
            cout << "Enter index (1-5) of card to replace: ";
            cin >> cardIndex;
            cardIndex = cardIndex - 1;
            hand.replaceCard(cardIndex, deck);
        }
        hand.showHand();
        int winnings = hand.evaluateHand()*player.getBet();
        player.setBalance(player.getBalance()+winnings);
        cout << "Winnings: " << winnings << endl;
        cout<<"Your balance: "<<player.getBalance();
        cout<<endl;
        char choice;
        cout << "Do you want to play another round? (y/n): ";
        cin >> choice;

        if (choice == 'n'){
            keepPlaying = false;
        }
    }
    return 0;
}
