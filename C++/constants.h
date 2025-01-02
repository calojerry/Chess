#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>
#include <unordered_map>

// unicode symbols for pieces
const std::unordered_map<char, std::string> UNICODE_PIECE_SYMBOLS = {
    {"R", "♖"}, {"r", "♜"},
    {"N", "♘"}, {"n", "♞"},
    {"B", "♗"}, {"b", "♝"},
    {"Q", "♕"}, {"q", "♛"},
    {"K", "♔"}, {"k", "♚"},
    {"P", "♙"}, {"p", "♟"},
};

// file names 
const std::string FILE_NAMES[8] = {"a", "b", "c", "d", "e", "f", "g", "h"};

// rank names
const std::string RANK_NAMES[8] = {"1", "2", "3", "4", "5", "6", "7", "8"};

// fen strings for starting position
const std::string STARTING_FEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
const std::string STARTING_BOARD_FEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR";

#endif // CONSTANTS_H
