#include "Ship.h"

// Ship constructor
Ship::Ship(size_t ptCount) : ConvexShape(ptCount)
{
	this->speed = SHIP_SPEED;
	this->fireCD = SHIP_FIRE_CD;
	this->lastFire = time_t();

	this->setOutlineColor(Color::White);
	this->setFillColor(Color::Black);
	this->setOutlineThickness(3);

	this->setPoint(0, Vector2f(20, 20));
	this->setPoint(1, Vector2f(10, 17));
	this->setPoint(2, Vector2f(0, 20));
	this->setPoint(3, Vector2f(10, 0));
}

// Ship deconstructor
Ship::~Ship()
{
	cout << "Inside ~Ship()" << endl;
}

// Returns Ship speed
float Ship::getSpeed() const
{
	return this->speed;
}

// Returns Ship fire cooldown
float Ship::getFireCD() const
{
	return this->fireCD;
}

// Gets Ship last fire
time_t Ship::getLastFire() const
{
	return this->lastFire;
}

// Sets Ship last fire
void Ship::setLastFire(const time_t &time)
{
	this->lastFire = time;
}

// Fires bullet from Ship pos
void Ship::fire(vector<Bullet> blts)
{
	if (this->getLastFire() + this->getFireCD() >= time_t())
	{
		blts.push_back(Bullet(this->getPosition().x));
	}

	time_t now;
	this->setLastFire(now);
}

// Moves Ship right based on Ship speed
void Ship::moveRight()
{
	if (this->getPosition().x >= WIN_W)
	{
		this->setPosition(0 - SHIP_SIZE, SHIP_YPOS);
	}
	else
	{
		this->setPosition(this->getPosition().x + this->getSpeed(), SHIP_YPOS);
	}
}

// Moves Ship left based on Ship speed
void Ship::moveLeft()
{
	if (this->getPosition().x <= 0 - SHIP_SIZE)
	{
		this->setPosition(WIN_W, SHIP_YPOS);
	}
	else
	{
		this->setPosition(this->getPosition().x - this->getSpeed(), SHIP_YPOS);
	}
}

// Returns whether the Ship is intersecting passed bounds
bool Ship::isHit()
{
	return false;
}

// Ship think hook, handles user input
void Ship::think(vector<Bullet> blts)
{
	if (Keyboard::isKeyPressed(Keyboard::A))
		this->moveLeft();
	if (Keyboard::isKeyPressed(Keyboard::D))
		this->moveRight();
	if (Keyboard::isKeyPressed(Keyboard::Space))
		this->fire(blts);
}