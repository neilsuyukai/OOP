#include "Shape1.h"
Shape1::Shape1()
{
    color=" ";
}
Shape1::Shape1(const string& color)
{
    setColor(color);
}
void Shape1::setColor(string color)
{
    this->color=color;
}
string Shape1::getColor()const
{
    return color;
}