#include "calculator.h"

calculator::calculator()
{
    //ctor
}

calculator::~calculator()
{
    //dtor
}
int calculator::add(int num1,int num2)
{
    return num1+num2;
}
int calculator::add(int num1,int num2,int num3)
{
    return num1+num2+num3;
}
float calculator::add(float num1,float num2)
{
    return num1+num2;
}
string calculator::add(string a,string b)
{
    return a+b;
}
