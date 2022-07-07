#ifndef Round_H
#define Round_H
#include "Shape1.h"
class Round : public Shape1
{
    private:
    double radius;
    public:
    Round();
    Round(double);
    Round(double,const string& color);
    void setRadius(double);
    double getRadius()const;
    double getPerimeter()const;
    string toString();

};
#endif