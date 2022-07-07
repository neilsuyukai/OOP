#ifndef Ball_H
#define Ball_H
#include "geo.h"
class Ball : public GeometricObject
{
    private:
    double radius;
    public:
    Ball();
    Ball(double);
    Ball(double, const string& color);
    void setRadius(double);
    double getRadius()const;
    double getVolume()const;
    double getArea()const;

};
#endif