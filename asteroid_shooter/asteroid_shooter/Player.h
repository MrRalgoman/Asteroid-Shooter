#pragma once

#include "Ship.h"

class Player : public Ship
{
public:
	Player();
	~Player();

	unsigned int getLives() const;
private:
	unsigned int lives;
};