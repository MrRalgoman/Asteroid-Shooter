#include "Asteroid.h"

// Asteroid default constructor
Asteroid::Asteroid() : CircleShape(AST_SIZE_BIG),
	radius(AST_SIZE_BIG), speed(AST_SPEED)
{
	this->setOutlineColor(Color::White);
	this->setFillColor(Color::Black);
	this->setOutlineThickness(3);

	int randomX = (std::rand() % WIN_W) + 1;
	this->setPosition(randomX, 0);
}

// Asteroid constructor
Asteroid::Asteroid(float radius) : CircleShape(radius), // random num 15-30
	radius(radius), speed(AST_SPEED)
{
	this->setOutlineColor(Color::White);
	this->setFillColor(Color::Black);
	this->setOutlineThickness(3);

	int randomX = (std::rand() % WIN_W) + 1;
	this->setPosition(randomX, 0);
}

// Asteroid destructor
Asteroid::~Asteroid()
{
	cout << "Inside ~Asteroid()" << endl;
}

// Gets Asteroid speed
float Asteroid::getSpeed() const
{
	return this->speed;
}

// Asteroid think function
void Asteroid::think()
{
	this->move(0, this->getSpeed());
}