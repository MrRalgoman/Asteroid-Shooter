#include "Asteroid.h"


void Asteroid::update(float dt, RenderWindow & w){
	Vector2f position = circle.getPosition();
	position.x += cos(angle)*speed*dt;
	position.y += sin(angle)*speed*dt;
	if (position.x > ver) {
		position.x = 0;
	}
	if (position.x < 0) {
		position.x = ver;
	}
	if (position.y > sh) {
		position.y = 0;
	}
	if (position.y < 0) {
		position.y = sh;
	}
	circle.setPosition(position);
}

void Asteroid::hit(){
	is_dead = true;
}

Asteroid * Asteroid::getAsteroid(float angle){
	Asteroid *a = new Asteroid(ast_size - 1, circle.getPosition(), angle, ver, hor);
	return a;
}

Asteroid::Asteroid(int size, Vector2f pos, float a, int v, int h){
	ver = v;
	hor = h;
	angle = a;
	if (size == 3) { //large
		ast_size = 3;
		radius = 40;
		circle.setFillColor(Color::White);
		speed = 100;
	}
	else if (size == 2) { //med asteroid
		ast_size = 2;
		radius = 20;
		circle.setFillColor(Color::White);
		speed = 150;
	}
	else if (size == 1) { //small 
		ast_size = 1;
		radius = 10;
		circle.setFillColor(Color::White);
		speed = 300;
	}
	circle.setRadius(radius);
	circle.setPosition(pos);
	circle.setOrigin(radius, radius);
}


Asteroid::~Asteroid()
{
}
