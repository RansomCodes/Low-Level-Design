#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
#include "./shape.h"

class Rectangle: public Shape
{
    public:
    void draw() override
    {
        std::cout<<"RECTANGLE\n";
    }
};

#endif