#include <string>
#include <vector>
using namespace std;

#ifndef CARDCOLLECTION_H
#define CARDCOLLECTION_H

class CardCollection{
    protected:
        vector<string> cardList;  //Attribute that is shared by both Deck and Hand
    public:
        CardCollection(vector<string>);  //Initializes a string vector
        void addCard(string);    //Method to add a card to your string vector
};
#endif
