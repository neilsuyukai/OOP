#include <iostream>
#include <iomanip>
#include <string>
#include "R.h"
#include "S.h"
#include "T.h"
using namespace std;
int main()
{
    double a1,a2,a3;
    string s1,s2;
    cin>>a1>>s1>>a2>>s2>>a3;
    Triangle t1(a1,a2,s2);
    Rectangle r1(a3,s2);
    cout<<fixed<<setprecision(1)<<"Triangle"<<"\n"<<"base:"<<t1.getbase()<<"height:"<<t1.getHeight()<<"area:"<<t1.getArea()<<"color"<<t1.getColor()<<endl;
    cout<<"Rectangle"<<"\n"<<"edge:"<<r1.getEdge()<<"area:"<<t1.getArea()<<"color:"<<t1.getColor()<<endl;
    return 0;
}