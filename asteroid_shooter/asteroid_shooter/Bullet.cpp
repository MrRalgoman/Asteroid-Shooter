#include "Bullet.h"

// Bullet constructor
Bullet::Bullet(const float &xPos) : RectangleShape(Vector2f(BLT_W, BLT_H))
{
	cout << "Inside Bullet::Bullet()" << endl;
	this->speed = BLT_SPEED;

	this->setOutlineColor(Color::White);
	this->setFillColor(Color::Black);
	this->setOutlineThickness(3);

	this->setPosition(xPos, SHIP_YPOS);
}

// Bullet deconstructor
Bullet::~Bullet()
{
	cout << "Inside ~Bullet()" << endl;
}

// Gets Bullet speed
float Bullet::getSpeed() const
{
	return this->speed;
}

// Bullet think function
void Bullet::think(vector<Bullet> blts)
{
	this->setPosition(this->getPosition().x, this->getPosition().y - this->getSpeed());

	cout << "Inside Bullet::think()" << endl;

	if (this->getPosition().y <= -BLT_H)
		blts.pop_back();
}