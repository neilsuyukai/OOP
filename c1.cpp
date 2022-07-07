#include "c1.h"
using namespace std;
Cuboid::Cuboid()
{
    length=1;
    width=1;
    height=1
}
Cuboid::Cuboid(double newLength,double newWidth,double newHeight)
{
    length=newLength;
    width=newWidth;
    height=newHeight;
}
void Cuboid::setLength(double newLength)
{
    length=newLength;
}
void Cuboid::setWidth(double newWidth)
{
    width=newWidth;
}
void Cuboid::setHeight(double newHeight)
{
    height=newHeight;
}
double Cuboid::getLength()const
{
    return length;
}
double Cuboid::getWidth()const
{
    return width;
}
double Cuboid::getHeight()const
{
    return height;
}
void Cuboid::toString()
{
    return toString;
}
double Cuboid::getVolume()
{
    return length*width*height;
}