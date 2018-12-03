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
	void startRound();
	void endRound();
	void newBulletEvent();
	void think();
private:
	RenderWindow window;
	Player ply;
	vector<Bullet> blts;
	vector<Asteroid> enemies;
};