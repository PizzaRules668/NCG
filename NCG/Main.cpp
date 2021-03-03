#include <iostream>

#include <SFML/Graphics.hpp>

#include "Abilities.hpp"
#include "Card.h"
#include "Cards.hpp"
#include "Player.h"
#include "Hand.h"
#include "Lane.h"
#include "Deck.h"

float getPos(int id, int numOfCards, float windowWidth, float imageWidth)
{
	return (windowWidth / numOfCards * id) - imageWidth;
}

int main()
{
	setupCards();

	sf::RenderWindow window(sf::VideoMode(1280, 720), "Window", sf::Style::Default);
	window.setFramerateLimit(240);

	Hand hand;

	Player player1;
	player1.setHand(&hand);
	player1.setDeck1(&Fire);
	player1.setDeck2(&Nature);

	Lane hieghts("images/TestLane.png");
	Lane ground1("images/TestLane.png");
	Lane ground2("images/TestLane.png");
	Lane ground3("images/TestLane.png");
	Lane floaty(true, "images/TestLane.png");

	std::vector<Lane*> lanes = { &hieghts, &ground1, &ground2, &ground3, &floaty };

	Fire.setPosition(getPos(1, 9, window.getSize().x, Fire.getTexture().getSize().x) - 50.0f, 580.0f);
	Nature.setPosition(getPos(9, 9, window.getSize().x, Fire.getTexture().getSize().x) - 50.0f, 580.0f);

	hieghts.setPosition(getPos(1, 5, window.getSize().x, hieghts.getTexture().getSize().x)-75.0f, 300.0f);
	ground1.setPosition(getPos(2, 5, window.getSize().x, ground1.getTexture().getSize().x)-75.0f, 300.0f);
	ground2.setPosition(getPos(3, 5, window.getSize().x, ground2.getTexture().getSize().x)-75.0f, 300.0f);
	ground3.setPosition(getPos(4, 5, window.getSize().x, ground3.getTexture().getSize().x)-75.0f, 300.0f);
	floaty.setPosition(getPos(5, 5, window.getSize().x, floaty.getTexture().getSize().x)-75.0f, 300.0f);

	hand.setMaxSize(7);

	hand.setMaxY(650.0f);
	hand.setMinY(580.0f);
	hand.setY(650.0f);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			// Update Variable

			player1.update(event, &hand, lanes, window.getSize().x);

			hieghts.update();
			ground1.update();
			ground2.update();
			ground3.update();
			floaty.update();
		}

		// Clear Screen
		window.clear();

		// Draw to window in order
		window.draw(player1);

		window.draw(hieghts);
		window.draw(ground1);
		window.draw(ground2);
		window.draw(ground3);
		window.draw(floaty);

		// Update Display
		window.display();
	}

	return 0;
}
