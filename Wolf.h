#ifndef WOLF_H
#define WOLF_H

#include "Animal.h"
#include "Carnivore.h"

#include <SFML/Graphics.hpp>

class Wolf : public Animal, public Carnivore
{
public:
    Wolf();
    Wolf(double m, double b);
    Wolf(double m, double b, int _x, int _y);
    ~Wolf();
    
    void talk() override;
    void setSprite() override;
    
private:
    static sf::Texture *texture;
};

#endif // WOLF_H
