#include <iostream>
#include <vector>

#include <SFML/Graphics/Drawable.hpp>

#include "Card.h"

#pragma once

class Lane : public sf::Drawable
{
public:
	Lane();
	Lane(std::string filePath);
	Lane(bool floaty, std::string filePath);

	bool addCard(Card* card);
	void removeCard();
	void removeCard(int index);
	void update(sf::Event event);

	void setTexture(std::string filepath);
	void setTexture(sf::Texture texture);
	sf::Texture getTexture();

	void setSprite(sf::Sprite sprite);
	sf::Sprite getSprite();

	float getX();
	float getY();
	sf::Vector2f getPosition();

	void setX(float x);
	void setY(float y);
	void setPosition(float x, float y);
	void setPosition(sf::Vector2f position);

	std::vector<Card*> getCards();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
private:

	sf::Vector2f position;

	sf::Texture tex;
	sf::Sprite sprite;

	bool floaty = false;
	std::vector<Card*> cards;

	sf::Text infoDisplay;
	sf::Font comicSans;
};