#ifndef Shape11_H
#define Shape11_H
#include <string>
using namespace std;

class Shape11
{
    private:
    string color;
    public:
    Shape11();
    Shape11(const string& color);
    void setColor(string);
    string getColor()const;
    //virtual double getRadius()const=0;
    virtual double getPerimeter()const=0;
    
};
#endif