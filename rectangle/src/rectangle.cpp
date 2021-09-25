#include "rectangle.h"
#include<iostream>


rectangle::rectangle()
{
    //ctor
}

rectangle::~rectangle()
{
    //dtor
}
void rectangle::setlength(float len)
{
    if(len>=0)
    {
        length=len;
    }
    else
    {
       std:: cout<<"error...";
    }

}
void rectangle::setwidth(float w)
{
    if(w>=0)
    {
        width=w;
    }
    else
    {
       std:: cout<<"error...";
    }

}
float rectangle::getlength()
{
    return length;
}
float rectangle:: getwidth()
{
    return width;
}
float rectangle:: getarea()
{
    return length*width;
}
