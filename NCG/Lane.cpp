#include "Lane.h"

Lane::Lane()
{
	this->comicSans.loadFromFile("assets/ComicSans.TTF");
	this->infoDisplay.setFont(this->comicSans);
	this->infoDisplay.setFillColor(sf::Color::White);
	this->infoDisplay.setScale(0.5f, 0.5f);

	this->floaty = false;
}
Lane::Lane(std::string filePath)
{
	this->comicSans.loadFromFile("assets/ComicSans.TTF");
	this->infoDisplay.setFont(this->comicSans);
	this->infoDisplay.setFillColor(sf::Color::White);
	this->infoDisplay.setScale(0.5f, 0.5f);

	this->setTexture(filePath);
	this->floaty = floaty;
}
Lane::Lane(bool floaty, std::string filePath)
{
	this->comicSans.loadFromFile("assets/ComicSans.TTF");
	this->infoDisplay.setFont(this->comicSans);
	this->infoDisplay.setFillColor(sf::Color::White);
	this->infoDisplay.setScale(0.5f, 0.5f);

	this->setTexture(filePath);
	this->floaty = floaty;
}

bool Lane::addCard(Card* card)
{
	if (this->cards.size() == 0)
	{
		if (this->floaty)
		{
			if (card->abilities.Floaty)
			{
				std::cout << "Placed Card" << std::endl;
				std::cout << "No Card here" << std::endl;
				card->setPosition(this->position);
				card->onPlay();
				cards.push_back(card);
				return true;
			}
			if (!card->abilities.Floaty)
			{
				std::cout << "Can't Place Card here" << std::endl;
				std::cout << "Not Floaty" << std::endl;
				return false;
			}
		}
		else if (!this->floaty)
		{
			std::cout << "Placed Card" << std::endl;
			std::cout << "No Card here" << std::endl;
			card->setPosition(this->position);
			card->onPlay();
			cards.push_back(card);
			return true;
		}
	}
	else if (this->cards.size() == 1)
	{
		if (this->floaty)
		{
			if (card->abilities.Floaty && (card->abilities.TeamUp || cards.at(0)->abilities.TeamUp))
			{
				std::cout << "Placed Card" << std::endl;
				std::cout << "Has Teamup and Floaty" << std::endl;
				card->setPosition(this->position);
				card->onPlay();
				cards.push_back(card);
				return true;
			}
			if (!card->abilities.Floaty && !(card->abilities.TeamUp || cards.at(0)->abilities.TeamUp))
			{
				std::cout << "Can't Place Card here" << std::endl;
				std::cout << "Has Floaty But Not Teamup" << std::endl;
				return false;
			}
		}
	}
	return false;
}

void Lane::removeCard()
{
	this->cards.erase(cards.begin(), cards.begin()+1);
}

void Lane::removeCard(int index)
{
	this->cards.erase(cards.begin(), cards.begin()+index);
}

void Lane::update(sf::Event event)
{
	if (this->cards.size() == 1)
	{
		for (int i = 0; i < this->cards.size(); i++)
		{
			if (this->cards.at(i)->getHP() == 0)
			{
				this->cards.at(i)->onDestroy();
				this->removeCard(i);
			}

			if (this->cards.at(i)->getPosition() == this->position)
				this->cards.at(i)->setPosition(this->position);

			if (this->cards.at(i)->getSprite().getGlobalBounds().contains(event.mouseMove.x, event.mouseMove.y))
			{
				this->infoDisplay.setString(this->cards.at(i)->getInfo());
				this->infoDisplay.setOrigin(this->infoDisplay.getLocalBounds().width, this->infoDisplay.getLocalBounds().height);
				this->infoDisplay.setPosition(event.mouseMove.x, event.mouseMove.y);
			}

			else if (!this->cards.at(i)->getSprite().getGlobalBounds().contains(event.mouseMove.x, event.mouseMove.y))
			{
				this->infoDisplay.setString("");
			}
		}
	}
}

void Lane::setTexture(std::string filepath)
{
	this->tex.loadFromFile(filepath);
	this->sprite.setTexture(this->tex);
}

void Lane::setTexture(sf::Texture texture)
{
	this->tex = texture;
	this->sprite.setTexture(this->tex);
}

sf::Texture Lane::getTexture()
{
	return this->tex;
}

void Lane::setSprite(sf::Sprite sprite)
{
	this->sprite = sprite;
}

sf::Sprite Lane::getSprite()
{
	return this->sprite;
}

float Lane::getX()
{
	return this->position.x;
}

float Lane::getY()
{
	return this->position.y;
}

sf::Vector2f Lane::getPosition()
{
	return this->position;
}

void Lane::setX(float x)
{
	this->position.x = x;
	this->sprite.setPosition(this->position);
}

void Lane::setY(float y)
{
	this->position.y = y;
	this->sprite.setPosition(this->position);
}

void Lane::setPosition(float x, float y)
{
	this->position.x = x;
	this->position.y = y;
	this->sprite.setPosition(this->position);
}

void Lane::setPosition(sf::Vector2f position)
{
	this->position = position;
	this->sprite.setPosition(this->position);
}

std::vector<Card*> Lane::getCards()
{
	return this->cards;
}

void Lane::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(this->sprite, states);

	for (int i = 0; i < this->cards.size(); i++)
		this->cards.at(i)->draw(target, states);

	target.draw(this->infoDisplay, states);
}