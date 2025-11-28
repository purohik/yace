#include <print>
#include "game/Board.h"

int main() {
	std::string game = "yace";
	std::println("Hello World, {}", game);
	Board board;
	board.debug();
	return 0;
}
