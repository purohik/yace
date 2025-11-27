//
// Created by puro on 27/11/25.
//
#pragma once

#include "Piece.h"
#include <vector>
#ifndef YACE_BOARD_H
#define YACE_BOARD_H


class Board {
    std::vector<std::vector<Piece>> board_;

public:
    Board();

    void init();
    void move();


    void debug() const;
};


#endif //YACE_BOARD_H