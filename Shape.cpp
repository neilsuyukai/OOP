#include "Shape.h"
using namespace std;
Shape::Shape()
{
    color=" ";
}
Shape::Shape(string newColor)
{
    color=newColor;
}
void Shape::setShape(string newColor)
{
    color=newColor;
}
string Shape::getShape()const
{
    return color;
}
void Shape::toString()
{
    return toString;
}