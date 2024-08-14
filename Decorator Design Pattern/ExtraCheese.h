#ifndef EXTRACHEESE_H
#define EXTRACHEESE_H

#include "./ToppingDecorator.h"

class ExtraCheese: public ToppingDecorator{
    public:
    BasePizza* pizza;

    ExtraCheese(BasePizza* p)
    {
        this->pizza=p;
    }

    int cost() override
    {
        return this->pizza->cost()+10;
    }
};

#endif