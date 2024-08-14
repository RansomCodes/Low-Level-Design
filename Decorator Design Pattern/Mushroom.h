#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "./ToppingDecorator.h"

class Mushroom: public ToppingDecorator{
    public:
    BasePizza* pizza;

    Mushroom(BasePizza* p)
    {
        this->pizza=p;
    }

    int cost() override
    {
        return this->pizza->cost()+50;
    }
};

#endif