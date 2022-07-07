#ifndef Cube_H
#define Cube_H
#include "geo.h"
class Cube : public GeometricObject
{
    private:
    double length;
    public:
    Cube();
    Cube(double);
    Cube(double ,const string&color);
    void setLength(double);
    double getLength()const;
    double getVolume()const;
    double getArea()const;

};
#endif