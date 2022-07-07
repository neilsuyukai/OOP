#include <iostream>
#include <iomanip>
#include <string>
#include "cube1.h"
#include "ball1.h"
#include "geo.h"
using namespace std;
void display(GeometricObject & g)
{
    cout<<fixed<<setprecision(1)<<",area:"<<g.getArea()<<",volume:"<<g.getVolume()<<",color:"<<g.getColor()<<endl;
}
int main()
{
    double a1,a2;
    string s1,s2;
    cin>>a1>>s1>>a2>>s2;
    Ball b1;
    b1.setRadius(a1);
    b1.setColor(s1);
    cout<<"Ball"<<endl;
    cout<<fixed<<setprecision(1)<<"radius:"<<b1.getRadius();
    display(b1);
    
    Cube c1;
    c1.setLength(a2);
    c1.setColor(s2);
    cout<<"Cube"<<endl;
    cout<<fixed<<setprecision(1)<<"length:"<<c1.getLength();
    display(c1);
    return 0;
}