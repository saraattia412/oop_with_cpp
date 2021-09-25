#include "car.h"

car::car()
{
    //ctor
}

car::~car()
{
    //dtor
}
void car::setmaker(string m)
{
    maker=m;
}
string car::getmaker()
{
    return maker;
}
void car::setyearmodel(int m)
{
    yearmodle=m;
}
int car::getyearmodel()
{
    return yearmodle;
}

