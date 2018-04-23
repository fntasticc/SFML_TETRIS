#pragma once
#include <SFML/Graphics.hpp>


class Tetros : public sf::Drawable {
public:

	Tetros();
	
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	void moveTetro(sf::Clock &clock, sf::Time &elapsed, std::vector<Tetros> vec);

	void handlePlayerInput(sf::Time &elapsed1, sf::Clock &clock1);

	float xPos() const;
	float yPos() const;

	bool isCollided(std::vector<Tetros> vec);

	
	sf::RectangleShape tetro0;
	

	float bottom;
	float left;
	float right;
	float top;

private:
	
	 
    const unsigned int boarderBottom;
	const unsigned int boarderRight;
	const unsigned int boarderLeft;
	float startArr[9];
	 


	

};