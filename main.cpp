#include <SFML/Graphics.hpp>
#include "tetro.h"
#include "background.h"
#include <iostream>
#include <vector>




int main()
{
	sf::RenderWindow window(sf::VideoMode(590, 960), "Tetris");
	sf::RenderStates states;

	Tetros *t = new Tetros;
	Tetros *old = 0;

	std::vector<Tetros> vec;

	sf::Clock clock, clock1, clock2, clock3;
	sf::Time elapsed, elapsed1, elapsed2, elapsed3;

	Background bg;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		elapsed = clock.getElapsedTime();
		elapsed1 = clock1.getElapsedTime();
		elapsed3 = clock3.getElapsedTime();

		window.clear(sf::Color(152, 245, 255));
		bg.draw(window, states);

		

		if (t->isCollided(vec))
		{
			Tetros *old = t;
			 
			vec.push_back(*old);
			t = new Tetros;
		}
		
		for (auto &a : vec)
		{
			a.draw(window, states);
			
		}
		 		
		t->moveTetro(clock, elapsed, vec);
		t->handlePlayerInput(elapsed1, clock1);
		t->draw(window, states);
		
		window.display();
	}

	return 0;
}