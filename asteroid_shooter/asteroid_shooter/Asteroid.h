#pragma once
#include "Game.h"
class Asteroid :
	public GameObject
{
public:
	void update(float dt, RenderWindow &w);
	void hit();
	void render(RenderWindow &w) {
		w.draw(circle);
	};
	bool dead() {
		return is_dead;
	};
	int getSize() {
		return ast_size;
	}
	float getRadius() {
		return radius;
	}
	Vector2f getPos() {
		return circle.getPosition();
	}
	int getType() {
		return 1;
	}
	Asteroid *getAsteroid(float angle);
	Asteroid(int size, Vector2f pos, float a, int v, int h);
	~Asteroid();
private:
	CircleShape circle;
	Vector2f vel;
	float radius;
	float speed;
	float angle;
	int ast_size; //large, med, small
	bool is_dead = false;
	int ver, hor;
};

