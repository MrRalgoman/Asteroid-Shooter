#pragma once

#include "Game.h"

using namespace sf;

int main()
{
	Game game;
	
	while (game.getWin().isOpen())
	{
		game.think();
	}

	return EXIT_SUCCESS;
}