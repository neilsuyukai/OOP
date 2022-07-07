#ifndef Cuboid_H
#define Cuboid_H
using namespace std;
class Cuboid
{
    private:
    double length;
    double width;
    double height;
    public:
    Cuboid();
    Cuboid(double,double,double);
    void setLength(double);
    void setWidth(double);
    void setHeight(double);
    double getLength()const;
    double getWidth()const;
    double getHeight()const;
    void toString();
    double getVolume();
    
};
#endif