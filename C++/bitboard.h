#ifndef BITBOARD_H
#define BITBOARD_H

#include "constants.h"

class Bitboard {
private:
  U64 bitboard; // boolean representation of an 8x8 chess board

public: 
  Bitboard();

  // helper functions
  void setbb(U64 bb);
  U64 getbb() const;

  void printbb() const;
};

#endif //BITBOARD_H
