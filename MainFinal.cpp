#include <iostream>
#include "Deck.cpp"
#include "Hand.cpp"
#include "Player.cpp"
#include "Game.cpp"
#include "CardCollection.cpp"

using namespace std;

int main() {
    //Declare an instance of player, deck and hand
    Player player;
    Deck deck;
    Hand hand; 
//Construct a game object
    Game game(player, deck, hand);
    //Recieve and set player name
    string name;
    cout<<"Player's name: "<<endl;
    cin>> name;
    player.setName(name);
    //Start game
    game.startGame();
    int bet; 
    //Print balance
    cout<<"Your balance: "<<player.getBalance();
    cout<<endl; 
    //Start game loop, runs until player quits or balance is 0
    while(keepPlaying && player.getBalance() > 0){
        //Create, shuffle, and give starting hand
        deck.clearDeck();
        deck.createDeck();
        deck.shuffleDeck();
        hand.clearHand();
        hand.getHand(deck);
        //Lets player set his bet and subtracts it from balance
        cout<<"Make your bet"<<endl;
        cin>>bet;
        while(bet>5 || bet>player.getBalance() || bet<=0){
        cout<<"Invalid bet, bet must be 5 or less and equal or less to your balance"<<endl;
        cin>>bet;
        }
        player.makeBet(bet);
        player.setBalance(player.getBalance()-bet);
        //Show a player his starting hand
        cout << "Player's Hand: " << endl;
        hand.showHand();
        int numReplacements;
        //Check how many cards a player wants to replace 
        cout << "Amount of cards you want to replace? (0-5): ";
        cin >> numReplacements;
        while(numReplacements<0 || numReplacements>5){
            cout<<"Invalid entry, must be number between 0-5: ";
            cin>> numReplacements;
        }
        //Replace the cards that a player wants
        for (int i = 0; i < numReplacements; ++i) {
            int cardIndex;
            cout << "Enter index (1-5) of card to replace: ";
            cin >> cardIndex;
            while(cardIndex<1 || cardIndex>5){
                cout<<"Invalid card index, must be number from 1-5: ";
                cin>>cardIndex;
            }
            cardIndex = cardIndex - 1;
            hand.replaceCard(cardIndex, deck);
        }
        //Show final hand
        hand.showHand();
        //Determine winnings based on the bet amount and hand evaluation
        int winnings = hand.evaluateHand()*player.getBet();
        //Add winnings to balance
        player.setBalance(player.getBalance()+winnings);
        cout << "Winnings: " << winnings << endl;
        //Show updated balance
        cout<<"Your balance: "<<player.getBalance();
        cout<<endl;
        //Ask the player if they want to play another round
        char choice;
        cout << "Do you want to play another round? (y/n): ";
        cin >> choice;

        if (choice == 'n'){
            keepPlaying = false;
        }
    }
    return 0;
}
