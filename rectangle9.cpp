#include <iostream>
#include <iomanip>
#ifndef RECTANGlE_H
#define RECTANGlE_H
using namespace std;

class Rectangle
{
    public:
    double width;
    double height;
    Rectangle();
    Rectangle(double newWidth,double newHeight);
    double getArea();
    double getPerimeter();
};
#endif
Rectangle::Rectangle()
{
    width=1;
    height=1;
}
Rectangle::Rectangle(double newWidth,double newHeight)
{
    width=newWidth;
    height=newHeight;
}
double Rectangle::getArea()
{
    return width*height;
}
double Rectangle::getPerimeter()
{
    return (width+height)*2;
}
int main()
{
	Rectangle rectangle1;
	cin>>rectangle1.width>>rectangle1.height;
	Rectangle rectangle2;
	cin>>rectangle2.width>>rectangle2.height;
	cout<<setprecision(2)<<fixed<<rectangle1.getArea()<<" "<<rectangle1.getPerimeter()<<endl;
	cout<<setprecision(2)<<fixed<<rectangle2.getArea()<<" "<<rectangle2.getPerimeter()<<endl;
	rectangle2.width=5.0;
	rectangle2.height=2.5;
	cout<<setprecision(2)<<fixed<<rectangle2.getArea()<<" "<<rectangle2.getPerimeter()<<endl;
	return 0;
}