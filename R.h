#ifndef Rectangle_H
#define Rectangle_H
#include "S.h"
class  Rectangle : public S
{
    private:
    double edge;
    public:
    Rectangle();
    Rectangle(double,const string&color)
    void setEdge(double);
    double getEdge()const;
    double getArea()const;
};
#endif