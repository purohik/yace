#pragma once

#include <string>
#include <utility>

#include "Constants.h"

class Piece {
	Side side_;
	PieceType type_;
	std::pair<int, int> index_;
	std::string pgn_position_;

public:
	Piece(Side side,
		PieceType type,
		std::pair<int, int> index,
		std::string position);

	std::string repr() const;
	char notation();
	std::string to_pgn();
	std::pair<int, int> to_index();
};
