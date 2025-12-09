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
	return std::to_string(this->type_)
		+ "("
		+ std::to_string(side_)
		+ ") @ "
		+ std::to_string(index_.first)
		+ ", "
		+ std::to_string(index_.second)
		+ " / "
		+ pgn_position_;
}

char Piece::notation() {
	return this->side_ == Side::WHITE ? NOTATION[this->type_] : std::tolower(NOTATION[this->type_]);
}

std::string Piece::to_pgn() {
	return "";
}

std::pair<int, int> Piece::to_index() {
	return std::make_pair(1, 1);
}
