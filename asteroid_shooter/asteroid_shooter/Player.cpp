#include "Player.h"

// Player constructor
Player::Player() : Ship(SHIP_PTCOUNT)
{
	this->lives = PLY_LIVES;
}

// Player deconstructor
Player::~Player()
{
	cout << "Inside ~Player()" << endl;
}

// Gets ships lives left
unsigned int Player::getLives() const
{
	return this->lives;
}