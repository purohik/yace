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

	initialize_pieces();

	std::println("Game initiazed.");
}


void Board::move() {

}


void Board::initialize_pieces() {
	// pawns
	for (int i = 0; i < 8; ++i) {
		board_[1][i] = std::make_shared<Piece>(
			Side::WHITE,
			PieceType::PAWN,
			std::make_pair(1, i),
			static_cast<char>('A' + i) + std::to_string(2));

		board_[6][i] = std::make_shared<Piece>(
			Side::BLACK,
			PieceType::PAWN,
			std::make_pair(6, i),
			static_cast<char>('A' + i) + std::to_string(7));
	}
}


void Board::print_board() {
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (board_[i][j] != nullptr) {
				std::println("{}", board_[i][j]->repr());
			}
			else {
				std::println("{},{} is empty.", i, j);
			}
		}
	}
}