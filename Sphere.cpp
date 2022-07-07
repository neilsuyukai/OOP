#include "Sphere.h"
Sphere::Sphere()
{
    radius=3.14159;
}
Sphere::Sphere(double newRadius)
{
    radius=newRadius;
}
void Sphere::setRadius(double newRadius)
{
    radius=newRadius;
}
double Sphere::getRadius()const
{
    return radius;
}
void Sphere::toString()
{
    return toString;
}
double Sphere::getVolume()
{
    return 4/3π*radius^3;
}