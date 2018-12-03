#include "Ship.h"

// Ship constructor
Ship::Ship(float radius, size_t ptCount) : CircleShape(radius, ptCount)
{
	this->speed = SHIP_SPEED;
}

// Ship deconstructor
Ship::~Ship()
{
	cout << "Inside ~Ship()" << endl;
}

// Moves Ship right based on Ship speed
void Ship::moveRight()
{
	this->setPosition(this->getPosition().x + this->getSpeed(), this->getPosition().y);
}

// Moves Ship left based on Ship speed
void Ship::moveLeft()
{
	this->setPosition(this->getPosition().x - this->getSpeed(), this->getPosition().y);
}

// Ship think hook, handles user input
void Ship::think()
{

}

// Returns Ship speed
float Ship::getSpeed()
{
	return this->speed;
}