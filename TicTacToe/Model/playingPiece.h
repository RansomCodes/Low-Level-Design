#ifndef PLAYING_PIECE_H
#define PLAYING_PIECE_H

#include "./pieceType.h"

class PlayingPiece{

    public:
    PieceType p;

    PlayingPiece(PieceType p= PieceType::EMPTY)
    {
        this->p= p;
    }
};

#endif