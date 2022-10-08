#pragma once

#include "CONFIG.h"
#include "Game.h"

class ChessGame
{
public:
	void runChess();
private:
	Game::GameWindow chessGameWindow{ WINDOW_HEIGHT, WINDOW_WIDTH, WINDOW_NAME };          
};

