//
// Created by puro on 27/11/25.
//

#include "Board.h"

#include <iostream>

Board::Board() {
    board_.reserve(8);
    for (int i = 0; i < 8; ++i) {
        board_[i].reserve(8);
    }

    init();

}


void Board::move() {

}


void Board::init() {
    // pawns

}

void Board::debug() const {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            std::cout << board_[i][j].repr() << " ";
        }
    }
}
