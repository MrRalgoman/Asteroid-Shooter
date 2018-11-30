#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	RenderWindow win(VideoMode(1000, 600), "Asteroid Shooter!");

	while (win.isOpen())
	{
		Event event;

		while (win.pollEvent(event))
		{
			if (event.type == Event::Closed)
				win.close();
		}

		win.clear();
		win.display();
	}

	return EXIT_SUCCESS;
}