#ifndef PLAYING_PIECEO_H
#define PLAYING_PIECEO_H

#include "./playingPiece.h"
#include "./pieceType.h"

class PlayingPieceO: public PlayingPiece{
    public:
    PlayingPieceO(): PlayingPiece(PieceType::O) {}
};

#endif