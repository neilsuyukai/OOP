#include "Pentagon.h"
#include <math.h>
Pentagon::Pentagon()
{
    edge=1;
}
Pentagon::Pentagon(double edge, const string& color)
{
    this->edge=edge;
    this->setColor(color);
}
void Pentagon::setEdge(double edge)
{
    this->edge=edge;
}
double Pentagon::getEdge()const
{
    return edge;
}
double Pentagon::getPerimeter()const
{
    return edge*5;
}
string Pentagon::toString()
{

}