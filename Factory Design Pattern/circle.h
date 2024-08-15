#ifndef CIRCLE_H
#define CIRCLE_H

#include<iostream>
#include "./shape.h"

class Circle: public Shape
{
    public:
    void draw() override
    {
        std::cout<<"CIRCLE\n";
    }
};

#endif