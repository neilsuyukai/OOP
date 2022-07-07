#include "Round.h"
#include <math.h>
Round::Round()
{
    radius=1;
}
Round::Round(double)
{
    this->radius=radius;
}
Round::Round(double radius,const string& color)
{
    this->radius=radius;
    this->setColor(color);
}
void Round::setRadius(double radius)
{
    this->radius=radius;
}
double Round::getRadius()const
{
    return radius;
}
double Round::getPerimeter()const
{
    return radius*radius*3.14;
}
string Round::toString()
{
    
}