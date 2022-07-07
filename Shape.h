#ifndef Shape_H
#define Shape_H
#include <string>
using namespace std;
class Shape
{
    private:
    string color;
    public:
    Shape();
    Shape(string);
    void setShape(string);
    string getShape()const;
    void toString();
};
#endif