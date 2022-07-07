#include <iostream>
#include <iomanip>
#include "10-2.h"
using namespace std;
void sum(Rectangle rectArray[], int size)
{
    double sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=rectArray[i].getArea();
    }
    cout<<sum;
}
void printRectangleArray(Rectangle rectArray[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<rectArray[i].getWidth()<<" "<<rectArray[i].getHeight()<<" "<<rectArray[i].getArea()<<endl;
    }
}

int main()
{
    double w,h;
    Rectangle a[4];
    for(int i=0;i<4;i++)
    {
        cin>>w>>h;
        a[i].setWidth(w);
        a[i].setHeight(h);
    }
    printRectangleArray(a,4);

    cout<<"Total:";
    sum(a,4);
    return 0;
}