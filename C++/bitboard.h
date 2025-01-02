#ifndef BITBOARD_H
#define BITBOARD_H

#include "constants.h"

class Bitboard {
private:
  U64 bitboard; // boolean representation of an 8x8 chess board

public: 
  Bitboard();

  // helper functions
  void printBitboard() const;
};

#endif //BITBOARD_H
