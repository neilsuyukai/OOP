#ifndef Score_H
#define Score_H
#include <string>
using namespace std;
class Score
{
    private:
    string name;
    double math;
    public:
    void setName(string);
    void setMath(double);
    string getName();
    double getMath();
    void print();
};
#endif