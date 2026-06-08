#include "board.h"
#include "piecetype.h"
#include <iostream>

using Bitboard = unsigned long long;

Board::Board() {
    Board::reset();
}

void Board::reset() {
    // starting position
    bitboards[WHITE_PAWN] = 0x000000000000FF00ULL;
    bitboards[WHITE_KNIGHT] = 0x0000000000000042ULL;
    bitboards[WHITE_BISHOP] = 0x0000000000000024ULL;
    bitboards[WHITE_ROOK] = 0x0000000000000081ULL;
    bitboards[WHITE_QUEEN] = 0x0000000000000008ULL;
    bitboards[WHITE_KING]  = 0x0000000000000010ULL;
    bitboards[BLACK_PAWN] = 0x00FF000000000000ULL;
    bitboards[BLACK_KNIGHT] = 0x4200000000000000ULL;
    bitboards[BLACK_BISHOP] = 0x2400000000000000ULL;
    bitboards[BLACK_ROOK] = 0x8100000000000000ULL;
    bitboards[BLACK_QUEEN] = 0x0800000000000000ULL;
    bitboards[BLACK_KING]  = 0x1000000000000000ULL;
}

void Board::makeMove(Move move) {
    Bitboard fromMask = 1ULL << move.from;
    Bitboard toMask = 1ULL << move.to;

    bitboards[move.pieceType] &= ~fromMask;

    // captures
    for (int i = 0; i < 12; i++) {
        if (bitboards[i] & toMask) {
            bitboards[i] &= ~toMask;
            break;
        }
    }

    bitboards[move.pieceType] |= toMask;
}

void Board::print(PieceType pieceType) {

}