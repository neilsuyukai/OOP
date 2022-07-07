#ifndef Round1_H
#define Round1_H
#include "Shape11.h"
class Round1 : public Shape11
{
    private:
    double radius;
    public:
    Round1();
    Round1(double);
    Round1(double,const string& color);
    void setRadius(double);
    double getRadius()const;
    double getPerimeter()const;
    string toString();

};
#endif