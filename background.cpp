#include "background.h"

Background::Background() : vertices{ sf::Vertex(sf::Vector2f(10, 10)),  sf::Vertex(sf::Vector2f(10, 670)),
									 sf::Vertex(sf::Vector2f(40, 10)),  sf::Vertex(sf::Vector2f(40, 670)),
									 sf::Vertex(sf::Vector2f(70, 10)),  sf::Vertex(sf::Vector2f(70, 670)),
									 sf::Vertex(sf::Vector2f(100, 10)), sf::Vertex(sf::Vector2f(100, 670)),
									 sf::Vertex(sf::Vector2f(130, 10)), sf::Vertex(sf::Vector2f(130, 670)),
									 sf::Vertex(sf::Vector2f(160, 10)), sf::Vertex(sf::Vector2f(160, 670)),
									 sf::Vertex(sf::Vector2f(190, 10)), sf::Vertex(sf::Vector2f(190, 670)),
									 sf::Vertex(sf::Vector2f(220, 10)), sf::Vertex(sf::Vector2f(220, 670)),
									 sf::Vertex(sf::Vector2f(250, 10)), sf::Vertex(sf::Vector2f(250, 670)),
									 sf::Vertex(sf::Vector2f(280, 10)), sf::Vertex(sf::Vector2f(280, 670)),
									 sf::Vertex(sf::Vector2f(310, 10)), sf::Vertex(sf::Vector2f(310, 670)) },
						  verticesV{ sf::Vertex(sf::Vector2f(10, 10)),  sf::Vertex(sf::Vector2f(310, 10)),
									 sf::Vertex(sf::Vector2f(10, 40)),  sf::Vertex(sf::Vector2f(310, 40)),
									 sf::Vertex(sf::Vector2f(10, 70)),  sf::Vertex(sf::Vector2f(310, 70)),
									 sf::Vertex(sf::Vector2f(10, 100)), sf::Vertex(sf::Vector2f(310, 100)),
									 sf::Vertex(sf::Vector2f(10, 130)), sf::Vertex(sf::Vector2f(310, 130)),
								     sf::Vertex(sf::Vector2f(10, 160)), sf::Vertex(sf::Vector2f(310, 160)),
									 sf::Vertex(sf::Vector2f(10, 190)), sf::Vertex(sf::Vector2f(310, 190)),
									 sf::Vertex(sf::Vector2f(10, 220)), sf::Vertex(sf::Vector2f(310, 220)),
									 sf::Vertex(sf::Vector2f(10, 250)), sf::Vertex(sf::Vector2f(310, 250)),
									 sf::Vertex(sf::Vector2f(10, 280)), sf::Vertex(sf::Vector2f(310, 280)),
									 sf::Vertex(sf::Vector2f(10, 310)), sf::Vertex(sf::Vector2f(310, 310)),
									 sf::Vertex(sf::Vector2f(10, 340)), sf::Vertex(sf::Vector2f(310, 340)),
									 sf::Vertex(sf::Vector2f(10, 370)), sf::Vertex(sf::Vector2f(310, 370)),
									 sf::Vertex(sf::Vector2f(10, 400)), sf::Vertex(sf::Vector2f(310, 400)),
									 sf::Vertex(sf::Vector2f(10, 430)), sf::Vertex(sf::Vector2f(310, 430)),
									 sf::Vertex(sf::Vector2f(10, 460)), sf::Vertex(sf::Vector2f(310, 460)),
									 sf::Vertex(sf::Vector2f(10, 490)), sf::Vertex(sf::Vector2f(310, 490)),
									 sf::Vertex(sf::Vector2f(10, 520)), sf::Vertex(sf::Vector2f(310, 520)),
									 sf::Vertex(sf::Vector2f(10, 550)), sf::Vertex(sf::Vector2f(310, 550)),
									 sf::Vertex(sf::Vector2f(10, 580)), sf::Vertex(sf::Vector2f(310, 580)),
									 sf::Vertex(sf::Vector2f(10, 610)), sf::Vertex(sf::Vector2f(310, 610)),
									 sf::Vertex(sf::Vector2f(10, 640)), sf::Vertex(sf::Vector2f(310, 640)),
									 sf::Vertex(sf::Vector2f(10, 670)), sf::Vertex(sf::Vector2f(310, 670)) }
{
	for (auto &a : vertices)
	{
		a.color = sf::Color(122, 139, 139);
	}
	for (auto &a : verticesV)
	{
		a.color = sf::Color(122, 139, 139);
	}

}

void Background::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(vertices, 22, sf::Lines, states);
	target.draw(verticesV, 46, sf::Lines, states);
}