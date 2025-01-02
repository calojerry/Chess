#ifndef BOARD_H
#define BOARD_H

class Board {
private:
  uint64_t bitboard; // boolean representation of an 8x8 chess board

public: 
  Board();

  // helper functions
  void printBitboard() const;
};

#endif
