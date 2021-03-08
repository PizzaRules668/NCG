#include "Player.h"

Hand* Player::getHand()
{
    return this->hand;
}

void Player::setHand(Hand* hand)
{
    this->hand = hand;
}

Deck* Player::getDeck1()
{
    return this->deck1;
}

Deck* Player::getDeck2()
{
    return this->deck2;
}

void Player::update(sf::Event event, Hand* hand, std::vector<Lane*> lanes, float targetSize)
{
    this->deck1->update(event, hand);
    this->deck2->update(event, hand);

    this->hand->update(event, lanes, targetSize);
    this->energy->update(event, targetSize);
}

void Player::setDeck1(Deck* deck)
{
    this->deck1 = deck;
}

void Player::setDeck2(Deck* deck)
{
    this->deck2 = deck;
}

void Player::setEnergy(Energy* energy)
{
    this->energy = energy;
}

Energy* Player::getEnergy()
{
    return this->energy;
}

int Player::getHP()
{
    return this->hp;
}

void Player::setHP(int hp)
{
    this->hp = hp;
}

void Player::heal(int amount)
{
    this->hp += amount;
}

void Player::takeDamage(int amount)
{
    this->hp -= amount;
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    deck1->draw(target, states);
    deck2->draw(target, states);

    hand->draw(target, states);
    energy->draw(target, states);
}
