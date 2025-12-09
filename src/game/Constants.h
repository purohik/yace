#pragma once

#include <unordered_map>

enum PieceType {
	PAWN,
	ROOK,
	KNIGHT,
	BISHOP,
	KING,
	QUEEN,
};

enum Side {
	BLACK,
	WHITE,
};

inline std::unordered_map<PieceType, char> NOTATION = {
	{PieceType::KING, 'K'},
	{PieceType::QUEEN, 'Q'},
	{PieceType::ROOK, 'R'},
	{PieceType::BISHOP, 'B'},
	{PieceType::KNIGHT, 'N'},
	{PieceType::PAWN, 'P'}
};