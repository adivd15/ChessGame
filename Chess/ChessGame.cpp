#include "ChessGame.h"

void ChessGame::runChess() {
	while (!chessGameWindow.shouldClose()) {
		glfwPollEvents();
	}
}
