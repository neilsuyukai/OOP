#include "S.h"
Shape::Shape()
{
    color=" ";
}
Shape::Shape(const string& color)
{
    setColor(color);
}
void Shape::setColor(string color)
{
    color=color;
}
string Shape::getColor()const
{
    return color;
}