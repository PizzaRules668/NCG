#include <iostream>
#include <random>
#include <chrono>

#include <SFML/Graphics.hpp>

#include "Abilities.hpp"
#include "Energy.hpp"
#include "Cards.hpp"
#include "Player.h"
#include "Game.h"
#include "Card.h"
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

	Game game;

	Lane hieghts("assets/images/TestLane.png");
	Lane ground1("assets/images/TestLane.png");
	Lane ground2("assets/images/TestLane.png");
	Lane ground3("assets/images/TestLane.png");
	Lane floaty(true, "assets/images/TestLane.png");

	std::vector<Lane*> lanes = { &hieghts, &ground1, &ground2, &ground3, &floaty };
	std::vector<Deck*> decks = { &Fire, &Nature, &Water, &Spooky, &Royal};

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count() * 2;
	std::shuffle(decks.begin(), decks.end(), std::default_random_engine(seed));

	game.getPlayerOne()->setDeck1(decks.at(0), getPos(1, 7, window.getSize().x, hieghts.getTexture().getSize().x)-75.0f, 580.0f);
	game.getPlayerOne()->setDeck2(decks.at(1), getPos(7, 7, window.getSize().x, hieghts.getTexture().getSize().x)-75.0f, 580.0f);

	game.getPlayerTwo()->setDeck1(decks.at(2), getPos(1, 7, window.getSize().x, hieghts.getTexture().getSize().x)-75.0f, 0.0f);
	game.getPlayerTwo()->setDeck2(decks.at(3), getPos(7, 7, window.getSize().x, hieghts.getTexture().getSize().x)-75.0f, 0.0f);

	game.setLanes(lanes);
	game.setDecks(decks);

	hieghts.setPosition(getPos(2, 7, window.getSize().x, hieghts.getTexture().getSize().x)-75.0f, 150.0f);
	ground1.setPosition(getPos(3, 7, window.getSize().x, ground1.getTexture().getSize().x)-75.0f, 150.0f);
	ground2.setPosition(getPos(4, 7, window.getSize().x, ground2.getTexture().getSize().x)-75.0f, 150.0f);
	ground3.setPosition(getPos(5, 7, window.getSize().x, ground3.getTexture().getSize().x)-75.0f, 150.0f);
	floaty.setPosition(getPos(6, 7, window.getSize().x, floaty.getTexture().getSize().x)-75.0f, 150.0f);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			// Update Variable
			game.update(event, window.getSize().x);
		}

		// Clear Screen
		window.clear();

		// Draw to window in order
		window.draw(game);

		// Update Display
		window.display();
	}

	return 0;
}
