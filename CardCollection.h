#include <string>
#include <vector>
using namespace std;

#ifndef CARDCOLLECTION_H
#define CARDCOLLECTION_H

class CardCollection{
    protected:
        vector<string> cardList;
    public:
        CardCollection(vector<string>);
        void addCard(string);
};
#endif