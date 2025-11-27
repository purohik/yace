//
// Created by puro on 27/11/25.
//
#pragma once

#include <iostream>
#include <utility>

#include "Constants.h"
#ifndef YACE_PIECE_H
#define YACE_PIECE_H

class Piece {
    Side side_;
    std::string type_;
    std::pair<int, int> position_;

public:
    Piece() = default;

    std::string repr() const {
         return this->type_ + "(" + std::to_string(side_) + ")";
    }
};

#endif //YACE_PIECE_H