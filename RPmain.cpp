#include <iostream>
#include <iomanip>
#include <string>
#include "Round.h"
#include "Pentagon.h"
#include "Shape1.h"
using namespace std;
int main()
{
    double a1,a2;
    string s1,s2;
    cin>>a1>>s1>>a2>>s2;
    Round r1(a1,s1);
    Pentagon p1(a2,s2);
    cout<<fixed<<setprecision(2)<<"Round"<<"\n"<<"Radius:"<<r1.getRadius()<<",Perimeter:"<<r1.getPerimeter()<<",Color:"<<r1.getColor()<<endl;
    cout<<fixed<<setprecision(2)<<"Pentagon"<<"\n"<<"Edge:"<<p1.getEdge()<<",Perimeter:"<<p1.getPerimeter()<<",Color:"<<p1.getColor()<<endl;
    return 0;
}