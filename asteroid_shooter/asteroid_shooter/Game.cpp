#include "Game.h"

// Game constructor
Game::Game()
{
	this->window.create(VideoMode(1000, 600), "Asteroid Shooter!");
	this->ply = new Player;
}