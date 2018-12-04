#include "Game.h"

// Game constructor
Game::Game()
{
	this->window.create(VideoMode(WIN_W, WIN_H), "Asteroid Shooter");
	this->window.setFramerateLimit(WIN_FRAMERATE); // https://en.sfml-dev.org/forums/index.php?topic=5922.0
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

	// Think functions
	this->ply.think(this->blts);

	for (unsigned int i = 0; i < this->blts.size(); i++)
	{
		this->blts[i].think();
		
		if (this->blts[i].getPosition().y <= -BLT_H)
			blts.erase(blts.begin()); // http://www.cplusplus.com/reference/vector/vector/erase/
	}

	this->window.clear();
	
	this->window.draw(this->ply);
	for (unsigned int i = 0; i < this->blts.size(); i++)
		this->window.draw(this->blts[i]);

	this->window.display();
}