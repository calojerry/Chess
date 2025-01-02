#ifndef CHESS_H
#define CHESS_H

#include "constants.h"
#include "enums.h"
#include "bitboard.h"
#include "board.h"
#include "piece.h"
#include "move.h"

#include <stack>
#include <string>

class Chess {
private:
  Board board;
  std::stack<Move> move_history;
  std::string current_FEN; // default should be starting position, not a null board

public:
  Chess();

};

#endif //CHESS_H
