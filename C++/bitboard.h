#ifndef BITBOARD_H
#define BITBOARD_H

class Bitboard {
private:
  uint64_t bitboard; // boolean representation of an 8x8 chess board

public: 
  Bitboard();

  // helper functions
  void printBitboard() const;
};

#endif //BITBOARD_H
