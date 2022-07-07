#include "R.h"
#include <math.h>
Rectangle::Rectangle()
{
    edge=1;
}
Rectangle::Rectangle(double edge,const string& color)
{
    this->edge=edge;
    this->setColor(color);
}
void Rectangle::setEdge(double edge)
{
    this->edge=edge;
}
double Rectangle::getEdge()const
{
    return edge;
}
double Rectangle:getArea()const
{
    return edge*edge;
}