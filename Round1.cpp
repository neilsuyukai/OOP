#include "Round1.h"
#include <math.h>
Round1::Round1()
{
    radius=1;
}
Round1::Round1(double)
{
    this->radius=radius;
}
Round1::Round1(double radius,const string& color)
{
    this->radius=radius;
    this->setColor(color);
}
void Round1::setRadius(double radius)
{
    this->radius=radius;
}
double Round1::getRadius()const
{
    return radius;
}
double Round1::getPerimeter()const
{
    return radius*radius*3.14;
}
string Round1::toString()
{
    
}