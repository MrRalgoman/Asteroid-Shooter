#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

#include "Settings.h"
#include "Bullet.h"

using namespace sf;
using std::size_t;
using std::cout;
using std::endl;
using std::time_t;

class Ship : public ConvexShape
{
public:
	Ship(size_t ptCount);
	~Ship();

	virtual float getSpeed() const;
	virtual float getFireCD() const;
	virtual time_t getLastFire() const;
	virtual void setLastFire(const time_t &time);

	virtual void fire(vector<Bullet> blts);
	virtual void moveRight();
	virtual void moveLeft();
	virtual bool isHit();
	virtual void think(vector<Bullet> blts);
private:
	float speed;			// Don't need to track position, ConvexShape already has
	float fireCD;			// getter and setter for pos, also has getter for shape bounds,
	time_t lastFire;	// have to write our own collision checks.
};				   