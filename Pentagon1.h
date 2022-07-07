#ifndef Pentagon1_H
#define Pentagon1_H
#include "Shape11.h"
class Pentagon1:public Shape11
{
    private:
    double edge;
    public:
    Pentagon1();
    Pentagon1(double, const string& color);
    void setEdge(double);
    double getEdge()const;
    double getPerimeter()const;
    string toString();
};
#endif