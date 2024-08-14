#include "BasePizza.h"
#include "ExtraCheese.h"
#include "FarmHouse.h"
#include "Margherita.h"
#include "Mushroom.h"
#include "ToppingDecorator.h"
#include "VegDelight.h"

#include <iostream>
using namespace std;

int main()
{
    Margherita* obj1=new Margherita;
    ExtraCheese* obj2=new ExtraCheese(obj1);
    Mushroom* obj3=new Mushroom(obj2);
    cout<<obj3->cost()<<endl;
}