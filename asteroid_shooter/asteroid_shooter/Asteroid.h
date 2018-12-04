#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

#include "Settings.h"

using namespace sf;
using std::cout;
using std::endl;

class Asteroid : public CircleShape
{
public:
	Asteroid();
	Asteroid(const float radius = AST_SIZE_BIG);
	~Asteroid();

	float getSpeed() const;

	void think();
private:
	float radius;
	float speed;
};