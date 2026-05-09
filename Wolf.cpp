#include "Wolf.h"
#include <iostream>
using namespace std;

#include <SFML/Graphics.hpp>

sf::Texture* Wolf::texture = NULL;

Wolf::Wolf()
{
}

Wolf::Wolf(double m, double b) : Animal(m, b)
{
}

Wolf::Wolf(double m, double b, int _x, int _y) : Animal(m, b, _x, _y)
{
}

Wolf::~Wolf()
{
}

void Wolf::talk()
{
    cout << "Awooooooo!" << endl;
}

void Wolf::setSprite()
{
    if (!texture)
    {
        texture = new sf::Texture;
        if (!texture->loadFromFile("res/wolf.png"))
            cout << "Wolf sprite went wrong" << endl;
    }
    s = new sf::Sprite;
    s->setTexture(*texture);
}
