#include "Pentagon1.h"
#include <math.h>
Pentagon1::Pentagon1()
{
    edge=1;
}
Pentagon1::Pentagon1(double edge, const string& color)
{
    this->edge=edge;
    this->setColor(color);
}
void Pentagon1::setEdge(double edge)
{
    this->edge=edge;
}
double Pentagon1::getEdge()const
{
    return edge;
}
double Pentagon1::getPerimeter()const
{
    return edge*5;
}
string Pentagon1::toString()
{

}