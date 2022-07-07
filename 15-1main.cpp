#include <iostream>
#include <iomanip>
#include <string>
#include "Cube.h"
#include "Ball.h"
#include "GeometricObject.h"
using namespace std;
int main()
{
    double a1,a2;
    string s1,s2;
    cin>>a1>>s1>>a2>>s2;
    Ball b1(a1,s1);
    Cube c1(a2,s2);
    cout<<fixed<<setprecision(1)<<"Ball"<<"\n"<<"radius:"<<b1.getRadius()<<",area:"<<b1.getArea()<<",volume:"<<b1.getVolume()<<",color:"<<b1.getColor()<<endl;
    cout<<"Cube"<<"\n"<<"length:"<<c1.getLength()<<",area:"<<c1.getArea()<<",volume:"<<c1.getVolume()<<",color:"<<c1.getColor()<<endl;
    return 0;
}