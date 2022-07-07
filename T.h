#ifndef Triangle_H
#define Triangle_H
#include "S.h"
#include <string>
using namespace std;
class Triangle : public S
{
    private:
    double base,height;
    public:
    Triangle();
    Triangle(double,double,const string& color);
    void setBase(double);
    double getBase()const;
    void setHeight(double);
    double getHeight()const;
    double getArea();
};
#endif