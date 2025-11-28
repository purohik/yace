#include "Piece.h"

Piece::Piece(Side side,
	PieceType type,
	std::pair<int, int> index,
	std::string position) {
	side_ = side;
	type_ = type;
	index_ = index;
	pgn_position_ = position;
}

std::string Piece::repr() const {
	return this->type_ + "(" + std::to_string(side_) + ")";
}

std::string Piece::to_pgn() {
	return "";
}

std::pair<int, int> Piece::to_index() {
	return std::make_pair<int, int>(1, 1);
}
