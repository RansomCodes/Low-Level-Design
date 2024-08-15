#ifndef SQUARE_H
#define SQUARE_H

#include<iostream>
#include "./shape.h"

class Square: public Shape
{
    public:
    void draw() override
    {
        std::cout<<"SQUARE\n";
    }
};

#endif