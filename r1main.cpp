#include <iostream>
#include "r1.h"
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
    double width1,height1;
    Rectangle a[4];
    for(int i=0;i<4;i++)
    {
        cin>>width1>>height1;
        a[i].setWidth(width1);
        a[i].setHeight(height1);
    }
    printRectangleArray(a,4);
    cout<<"Total:";
    sum(a,4);
    return 0;
}