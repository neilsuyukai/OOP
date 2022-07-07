#ifndef Shape1_H
#define Shape1_H
#include <string>
using namespace std;

class Shape1
{
    private:
    string color;
    public:
    Shape1();
    Shape1(const string& color);
    void setColor(string);
    string getColor()const;
};
#endif