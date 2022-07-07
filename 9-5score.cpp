#include <iostream>
#include <iomanip>
#include <string>
#include "9-5.h"
using namespace std;
void Score::setName(string newName)
{
    name=newName;
}
void Score::setMath(double newMath)
{
    math=newMath;
}
string Score::getName()
{
    return name;
}
double Score::getMath()
{
    return math;
}
void Score::print()
{
    cout<<name<<" "<<math<<endl;
}