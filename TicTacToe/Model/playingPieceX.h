#ifndef PLAYING_PIECEX_H
#define PLAYING_PIECEX_H

#include "./playingPiece.h"
#include "./pieceType.h"

class PlayingPieceX : public PlayingPiece {
public:
    PlayingPieceX() : PlayingPiece(PieceType::X) {}
};

#endif
