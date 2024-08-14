#ifndef PLAYER_H
#define PLAYER_H

#include "./playingPiece.h"

#include<string>
using namespace std;

class Player{
    public:
    string name;
    PlayingPiece* playingpiece;

    Player(string s, PlayingPiece* playingpiece)
    {
        this->name=s;
        this->playingpiece=playingpiece;
    }
};

#endif