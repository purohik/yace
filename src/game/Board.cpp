//
// Created by puro on 27/11/25.
//

#include "Board.h"

#include <iostream>
#include <memory>
#include <utility>
#include <print>

Board::Board() {
	std::println("initializing game...");
	board_.reserve(8);
	for (int i = 0; i < 8; ++i) {
		board_[i].reserve(8);
	}

	init();

	std::println("Game initiazed.");
}


void Board::move() {

}


void Board::init() {
	// pawns
	for (int i = 0; i < 8; ++i) {
		std::shared_ptr pawn = std::make_shared<Piece>(
			Side::WHITE,
			PieceType::PAWN,
			std::make_pair(1, i),
			""
		);
		board_[1][i] = pawn;
	}
}

void Board::debug() const {
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			std::print("{} ", board_[i][j]->repr());
		}
	}
}
