#pragma once

#include "Ship.h"

#define PLAYER_LIVES 3

class Player : Ship
{
public:
	Player(float radius, size_t ptCount);
	~Player();

	unsigned int getLives() const;
private:
	unsigned int lives;
};