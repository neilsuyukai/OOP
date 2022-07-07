#include "GeometricObject.h"
GeometricObject::GeometricObject()
{
    color="white";
}
GeometricObject::GeometricObject(const string&color)
{
    setColor(color);
}
string GeometricObject::getColor()const
{
    return color;
}
void GeometricObject::setColor(const string&color)
{
    this->color=color;
}
