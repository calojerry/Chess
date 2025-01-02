#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>
#include <unordered_map>
#include <cstdint> // for 64-bit unsigned integer

using U64 = std::uint64_t;

const U64 LIGHT_SQUARES = 0x55AA55AA55AA55AAULL; // Light squares bitboard
const U64 DARK_SQUARES = 0xAA55AA55AA55AA55ULL;  // Dark squares bitboard

const U64 NOT_A = 18374403900871474942ULL;   // Not A file bitboard
const U64 NOT_H = 9187201950435737471ULL;   // Not H file bitboard
const U64 NOT_HG = 4557430888798830399ULL;  // Not HG file bitboard
const U64 NOT_AB = 18229723555195321596ULL; // Not AB file bitboard

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
