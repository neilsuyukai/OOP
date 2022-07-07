#include <iostream>
#include <iomanip>
#include "9-2.h"
using namespace std;
int main()
{
    Rectangle rectangle1;
    Rectangle rectangle2;
    cin>>rectangle1.width>>rectangle1.height;
    cin>>rectangle2.width>>rectangle2.height;
    cout<<fixed<<setprecision(2)<<rectangle1.getArea()<<" "<<rectangle1.getPerimeter()<<endl;
    cout<<fixed<<setprecision(2)<<rectangle2.getArea()<<" "<<rectangle2.getPerimeter()<<endl;
    rectangle2.width=5.0;
    rectangle2.height=2.5;
    cout<<fixed<<setprecision(2)<<rectangle2.getArea()<<" "<<rectangle2.getPerimeter()<<endl;
}