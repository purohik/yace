#pragma once

#include "Piece.h"
#include <memory>
#include <vector>

class Board {
	std::vector<std::vector<std::shared_ptr<Piece>>> board_;
	// this tracks the moves played by white and black in one pair.
	std::vector<std::pair<std::string, std::string>> moves_;
	Side turn_{ Side::WHITE };
	bool is_white_castled_{ false };
	bool is_black_castled_{ false };

public:
	Board();

	void initialize_pieces();
	void move();
	void print_board();
	void pretty_print();
};