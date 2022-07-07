#include "cube1.h"
#include <math.h>
Cube::Cube()
{
    length=1;
}
Cube::Cube(double)
{
    this->length=length;
}
Cube::Cube(double length,const string&color)
{
    this->length=length;
    this->setColor(color);
}
void Cube::setLength(double length)
{
    this->length=length;
}
double Cube::getLength()const
{
    return length;
}
double Cube::getVolume()const
{
    return pow(length,3);
}
double Cube::getArea()const
{
    return 6*pow(length,2);
}