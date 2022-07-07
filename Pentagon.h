#ifndef Pentagon_H
#define Pentagon_H
#include "Shape1.h"
class Pentagon:public Shape1
{
    private:
    double edge;
    public:
    Pentagon();
    Pentagon(double, const string& color);
    void setEdge(double);
    double getEdge()const;
    double getPerimeter()const;
    string toString();
};
#endif