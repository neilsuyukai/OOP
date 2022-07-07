#include "9-4.h"
BMI::BMI(double w,double h)
{
    weight=w;
    height=h;
}
double BMI::getBMI()
{
    return weight/(height*height);
}