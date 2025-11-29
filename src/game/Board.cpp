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

	// rooks
	board_[0][0] = std::make_shared<Piece>(
		Side::WHITE,
		PieceType::ROOK,
		std::make_pair(0, 0),
		"A1");

	board_[0][7] = std::make_shared<Piece>(
		Side::WHITE,
		PieceType::ROOK,
		std::make_pair(0, 7),
		"H1");

	board_[7][0] = std::make_shared<Piece>(
		Side::BLACK,
		PieceType::ROOK,
		std::make_pair(7, 0),
		"A8");

	board_[7][7] = std::make_shared<Piece>(
		Side::BLACK,
		PieceType::ROOK,
		std::make_pair(7, 7),
		"H8");

	// knights
	board_[0][1] = std::make_shared<Piece>(
		Side::WHITE,
		PieceType::KNIGHT,
		std::make_pair(0, 1),
		"B1");

	board_[0][6] = std::make_shared<Piece>(
		Side::WHITE,
		PieceType::KNIGHT,
		std::make_pair(0, 6),
		"G1");

	board_[7][1] = std::make_shared<Piece>(
		Side::BLACK,
		PieceType::KNIGHT,
		std::make_pair(7, 1),
		"B8");

	board_[7][6] = std::make_shared<Piece>(
		Side::BLACK,
		PieceType::KNIGHT,
		std::make_pair(7, 6),
		"G8");

	// bishops
	board_[0][2] = std::make_shared<Piece>(
		Side::WHITE,
		PieceType::BISHOP,
		std::make_pair(0, 2),
		"C1");

	board_[0][5] = std::make_shared<Piece>(
		Side::WHITE,
		PieceType::BISHOP,
		std::make_pair(0, 5),
		"F1");

	board_[7][2] = std::make_shared<Piece>(
		Side::BLACK,
		PieceType::BISHOP,
		std::make_pair(7, 2),
		"C8");

	board_[7][5] = std::make_shared<Piece>(
		Side::BLACK,
		PieceType::BISHOP,
		std::make_pair(7, 5),
		"F8");

	// queens
	board_[0][3] = std::make_shared<Piece>(
		Side::WHITE,
		PieceType::QUEEN,
		std::make_pair(0, 3),
		"D1");

	board_[7][3] = std::make_shared<Piece>(
		Side::BLACK,
		PieceType::QUEEN,
		std::make_pair(7, 3),
		"D8");

	// kings
	board_[0][4] = std::make_shared<Piece>(
		Side::WHITE,
		PieceType::KING,
		std::make_pair(0, 4),
		"E1");

	board_[7][4] = std::make_shared<Piece>(
		Side::BLACK,
		PieceType::KING,
		std::make_pair(7, 4),
		"E8");
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