#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include<string>
#include "./circle.h"
#include "./rectangle.h"
#include "./square.h"

class ShapeFactory{
    public:
    Shape* getShape(std::string s)
    {
        if(s=="CIRCLE") return new Circle();
        else if(s=="RECTANGLE") return new Rectangle();
        else if(s=="SQUARE") return new Square();
        else return NULL;
    }
};

#endif
