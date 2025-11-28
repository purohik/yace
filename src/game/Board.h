#pragma once

#include "Piece.h"
#include <memory>
#include <vector>

class Board {
	std::vector<std::vector<std::shared_ptr<Piece>>> board_;
	Side turn_{ Side::WHITE };
	bool is_white_castled_{ false };
	bool is_black_castled_{ false };

public:
	Board();

	void init();
	void move();
	void debug() const;
};