#ifndef CHESS_H
#define CHESS_H

#include "constants.h"
#include "enums.h"
#include "structs.h"
#include "bitboard.h"

class Chess {
private:
  Bitboard board;
  Color currTurn = Color::WHITE; // default: white to move
  bool gameOver = false; // default: game is not over
  bool isDraw;

public:
  Chess();

};

#endif
