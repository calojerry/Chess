#ifndef CHESS_H
#define CHESS_H

#include "constants.h"
#include "enums.h"
#include "bitboard.h"
#include "board.h"
#include "piece.h"
#include "move.h"

#include <stack>

class Chess {
private:
  Board position;
  std::stack<Move> move_history;

public:
  Chess();

};

#endif //CHESS_H
