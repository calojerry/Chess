#ifndef CHESS_H
#define CHESS_H

#include "enums.h"
#include "board.h"

class Chess {
private:
  Board board;
  Color currTurn = Color::WHITE;
  bool gameOver = false;

public:
  Chess();

};

#endif
