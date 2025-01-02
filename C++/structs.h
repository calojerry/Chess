#ifndef STRUCTS_H
#define STRUCTS_H

struct Piece{
  Color color;
  PieceType type;
};

struct FEN {
  string placement;
  Color activeColor;
  char castlingRights;
  Square enPassantTarget;
  int numHalfmove; // used for fifty-move rule
  int numFullmove; // starts at 1 and increments after black moves
};

#endif
