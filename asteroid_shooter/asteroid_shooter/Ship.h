#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using std::size_t;
using std::cout;
using std::endl;

#define SHIP_SPEED 5.0

class Ship : public CircleShape
{
public:
	Ship(float radius, size_t ptCount);

	virtual void moveRight();
	virtual void moveLeft();
	virtual void think();
	virtual bool isHit();
	virtual float getSpeed();
private:
	float speed; // Don't need to track position, CircleShape already has
};					   // getters and setters for position and bound checking functions