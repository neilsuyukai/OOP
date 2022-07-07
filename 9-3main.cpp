#include <iostream>
#include <iomanip>
#include "9-3.h"
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    Rectangle rectangle1(a,b);
    Rectangle rectangle2(c,d);
    cout<<fixed<<setprecision(2)<<rectangle1.getArea()<<" "<<rectangle1.getPerimeter()<<endl;
    cout<<fixed<<setprecision(2)<<rectangle2.getArea()<<" "<<rectangle2.getPerimeter()<<endl;
    rectangle2.setWidth(5.0);
    rectangle2.setHeight(2.5);
    cout<<fixed<<setprecision(2)<<rectangle2.getArea()<<" "<<rectangle2.getPerimeter()<<endl;
    return 0;
}