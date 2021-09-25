#include "circle.h"

circle::circle()
{
    redius=1;
}

circle::~circle()
{
    //dtor
}
void circle::set_redius(double r)
{

    redius=r;
}
double circle::get_redius()
{
    return redius;
}
double circle::get_area()
{
    return 3.14*redius*redius;
}
double circle::get_perineter()
{
    return 3.14*2*redius;
}
