#ifndef Ball_H
#define Ball_H
#include "GeometricObject.h"
class Ball : public GeometricObject
{
    private:
    double radius;
    public:
    Ball();
    Ball(double);
    Ball(double,const string& color);
    double getRadius()const;
    void setRadius(double);
    double getArea()const;
    double getVolume()const;
};
#endif