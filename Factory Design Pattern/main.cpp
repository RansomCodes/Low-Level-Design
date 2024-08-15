#include<bits/stdc++.h>
using namespace std;

#include "./shapefactory.h"
#include "./shape.h"

int main()
{
    ShapeFactory* s=new ShapeFactory(); 
    Shape* obj=s->getShape("SQUARE");
    if(obj)
    {
        obj->draw();
        delete obj;
    }
    delete s;
    return 0; 
}