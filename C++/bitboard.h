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
  // U64 manipulation
  void setbb(U64 bb);
  U64 getbb() const;
  void clearbb();
  void printbb() const;

  // bit manipulation
  void setbit(Square square);
  bool getbit(Square square) const;
  void clearbit(Square square);
  bool popbit(Square square) const;
};

#endif //BITBOARD_H
