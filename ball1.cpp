#include "ball1.h"
#include <math.h>
Ball::Ball()
{
    radius=1;
}
Ball::Ball(double)
{
    this->radius=radius;
}
Ball::Ball(double radius, const string& color)
{
    this->radius=radius;
    this->setColor(color);
}
void Ball::setRadius(double radius)
{
    this->radius=radius;
}
double Ball::getRadius()const
{
    return radius;
}
double Ball::getVolume()const
{
    return (4*3.14159*pow(radius,3))/3;
}
double Ball::getArea()const
{
    return 4*3.14159*pow(radius,2);
}