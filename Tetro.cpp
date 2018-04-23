#include "tetro.h"
#include <iostream>
#include <time.h>
#include <vector>

Tetros::Tetros() : boarderBottom{ 640 }, boarderRight{ 340 }, boarderLeft{ 40 }, startArr{10,40,70,100,130,160,190,220,250}
{
	srand(unsigned(time(nullptr)));
	
	tetro0.setSize(sf::Vector2f(60, 60));
	tetro0.setFillColor(sf::Color(255, 0, 0, 128));
	tetro0.setPosition(sf::Vector2f(130, 10));
	tetro0.setOrigin(sf::Vector2f(tetro0.getSize().x / 2, tetro0.getSize().y / 2));
	

}

void Tetros::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(tetro0, states);
}

void Tetros::moveTetro(sf::Clock &clock, sf::Time &elapsed, std::vector<Tetros> vec)
{
	/*
	for (auto a : vec)
	{
		if (tetro0.getGlobalBounds().contains(sf::Vector2f(a.tetro0.getPosition().x, a.tetro0.getPosition().y)))
		{
			std::cout << "collided" << std::endl;
		}
	}
	*/

	if (elapsed.asMilliseconds() >= 500)
	{
		clock.restart();
		//std::cout << "x Pos: " << tetro0.getPosition().x << " y Pos: " << tetro0.getPosition().y << std::endl;
		tetro0.move(sf::Vector2f(0, 30));	
		
	
	}
}

void Tetros::handlePlayerInput(sf::Time &elapsed1, sf::Clock &clock1)
{
	if (elapsed1.asMilliseconds() >= 95)
	{
		elapsed1 = clock1.restart();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && (tetro0.getPosition().x + tetro0.getSize().x) != boarderRight)
		{
			tetro0.move(sf::Vector2f(30, 0));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && tetro0.getPosition().x != boarderLeft)
		{
			tetro0.move(sf::Vector2f(-30, 0));
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && elapsed1.asMilliseconds() >= 20)
	{
		elapsed1 = clock1.restart();
		tetro0.move(sf::Vector2f(0, 30));
	}
}

float Tetros::xPos() const
{
	return tetro0.getPosition().x;
}

float Tetros::yPos() const
{
	return tetro0.getPosition().y;
}

bool Tetros::isCollided(std::vector<Tetros> vec)
{
	if (tetro0.getPosition().y >= boarderBottom)
	{
		return true;
	} 
	
	for (auto &a : vec)
	{
		if (//tetro0.getGlobalBounds().contains(sf::Vector2f(a.tetro0.getPosition().x, a.tetro0.getPosition().y - 30)) ||
			(tetro0.getGlobalBounds().contains(sf::Vector2f(a.tetro0.getPosition().x, a.tetro0.getPosition().y - a.tetro0.getSize().y)) ||
			tetro0.getGlobalBounds().contains(sf::Vector2f(a.tetro0.getPosition().x - 30, a.tetro0.getPosition().y - tetro0.getSize().y)))
			
			)

		{
			std::cout << "collided" << std::endl;
			return true;
		}
	
	}
	 
	return false;
}

