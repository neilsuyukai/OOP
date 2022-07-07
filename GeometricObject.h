#ifndef GeometricObject_H
#define GeometricObject_H
#include <string>
using namespace std;
class GeometricObject
{
    private:
    string color;
    public:
    GeometricObject();
    GeometricObject(const string&color);
    string getColor()const;
    void setColor(const string&color);
    virtual double getArea()const=0;
    virtual double getVolume()const=0;
};
#endif