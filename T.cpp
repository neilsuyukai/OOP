#include "T.h"
#include <math.h>
Triangle::Triangle()
{
    base=1;
    height=1;
}
Triangle::Triangle(double base,double height,const string& color)
{
    this->base=base;
    this->height=height;
    this->setColor(color);
}
void Triangle::setBase(double base)
{
    this->base=base;
}
double Triangle::getBase()const
{
    return base;
}
void Triangle:setHeight(double height)
{
    this->height=height;
}
double Triangle:getHeight()const
{
    return height;
}
double Triangle:getArea()
{
    return (base*height)/2;
}