#include <SFML/Graphics/Drawable.hpp>

#include "Deck.h"
#include "Hand.h"

#pragma once

class Player : public sf::Drawable
{
public:

	Hand* getHand();
	void setHand(Hand *hand);

	Deck* getDeck1();
	Deck* getDeck2();

	void update(sf::Event event, Hand *hand, std::vector<Lane*> lanes, float targetSize);

	void setDeck1(Deck *deck);
	void setDeck2(Deck* deck);

	int getHP();
	void setHP(int hp);
	void heal(int amount);
	void takeDamage(int amount);

private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	int hp;

	Hand *hand;

	Deck *deck1;
	Deck *deck2;
};

