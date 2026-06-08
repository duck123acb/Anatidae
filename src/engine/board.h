#pragma once

#include "move.h"
#include "piecetype.h"

using Bitboard = unsigned long long;

class Board {
public:
    Board();

    void reset();
    void makeMove(Move);
    void print(PieceType);

private:
    Bitboard bitboards[12];
};