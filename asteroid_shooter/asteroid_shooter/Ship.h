#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;

#define SHIP_SPEED 5

class Ship : RectangleShape
{
public:
	Ship();
	~Ship();


private:
	unsigned const int speed;
};