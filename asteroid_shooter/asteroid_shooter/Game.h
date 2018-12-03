#pragma once

#include <iostream>
#include <vector>

#include "Player.h"
#include "Bullet.h"
#include "Asteroid.h"

using std::vector;

class Game
{
public:
	Game();
	~Game();

	bool initialize();
	void endRound();
	void startRound();
	void addBullet();
	void think();
private:
	Player ply;
	vector<Bullet> bullets;
	vector<Asteroid> enemies;
};