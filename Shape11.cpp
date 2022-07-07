#include "Shape11.h"
Shape11::Shape11()
{
    color=" ";
}
Shape11::Shape11(const string& color)
{
    setColor(color);
}
void Shape11::setColor(string color)
{
    this->color=color;
}
string Shape11::getColor()const
{
    return color;
}
