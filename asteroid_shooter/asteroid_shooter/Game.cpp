#include "Game.h"

// Game constructor
Game::Game()
{
	this->window.create(VideoMode(WIN_W, WIN_H), "Asteroid Shooter");
	this->ply = Player();
	this->ply.setPosition((WIN_W / 2) - (SHIP_SIZE / 2), SHIP_YPOS);
}

// Game deconstructor
Game::~Game()
{
	cout << "Inside ~Game()" << endl;
}

// Gets Game window
RenderWindow &Game::getWin()
{
	return this->window;
}

// Think function for Game
void Game::think()
{
	Event event;

	while (this->window.pollEvent(event))
	{
		if (event.type == Event::Closed)
			this->window.close();
	}

	this->ply.think(this->blts);

	for (int i = 0; i < this->blts.size(); i++)
		this->blts[i].think(this->blts);

	this->window.clear();
	this->window.draw(this->ply);
	this->window.display();
}