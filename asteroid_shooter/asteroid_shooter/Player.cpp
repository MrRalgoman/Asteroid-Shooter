#include "Player.h"

// Player constructor
Player::Player(float radius, size_t ptCount) : Ship(radius, ptCount)
{
	this->lives = PLAYER_LIVES;
}

// Player deconstructor
Player::~Player()
{
	cout << "Inside ~Player()" << endl;
}

unsigned int // here