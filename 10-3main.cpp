#include <iostream>
#include "10-3.h"
using namespace std;

int main()
{
	Rectangle re[3];
	double w,h;
	for(int i=0;i<3;i++)
	{
	    cin>>w>>h;
	    re[i].setWidth(w);
	    re[i].setHeight(h);
	}
	for(int j=0;j<3;j++)
	{
	    cout<<re[j].getWidth()<<" "<<re[j].getHeight()<<" "<<re[j].getArea()<<endl;
	}
	cout<<Rectangle::getNumOfRect()<<" "<<" Rectangles";
	return 0;
}