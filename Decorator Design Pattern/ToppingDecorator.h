#ifndef TOPPINGDECORATOR_H
#define TOPPINGDECORATOR_H

#include "./BasePizza.h"

class ToppingDecorator: public BasePizza{
    public:

    virtual int cost()=0;
};

#endif