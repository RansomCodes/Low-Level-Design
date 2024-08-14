#ifndef FARMHOUSE_H
#define FARMHOUSE_H

#include "./BasePizza.h"

class FarmHouse: public BasePizza{
    public:

    int cost(){
        return 200;
    }
};

#endif