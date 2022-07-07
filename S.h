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
    Shape(const string& color);
    void setColor(string);
    string getColor()const;
};
#endif