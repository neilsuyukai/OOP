#ifndef Geometric_H
#define Geometric_H
#include <string>
using namespace std;

class GeometricObject
{
    private:
    string color;
    public:
    GeometricObject();
    GeometricObject(const string& color);
    void setColor(const string& color);
    string getColor()const;
    virtual double getArea()const=0;
    virtual double getVolume()const=0;
};
#endif