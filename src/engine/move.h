#pragma once

#include "piecetype.h"

struct Move {
    PieceType pieceType;
    int from;
    int to;
    int flags;
};

/*
 *  TODO:  Define flags in bit form
*/