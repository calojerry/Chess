#ifndef BITBOARD_H
#define BITBOARD_H

#include "constants.h"

class Bitboard {
private:
  U64 bitboard; // boolean representation of an 8x8 chess board

public: 
  Bitboard();

  /********************
  |  HELPER FUNCTIONS  |
  ********************/
  // U64 HELPER FUNCTIONS
  void setbb(U64 bb);
  U64 getbb() const;

  // BIT HELPER FUNCTIONS
  void setbit(Square square);
  bool getbit() const;

  void printbb() const;
};

#endif //BITBOARD_H
