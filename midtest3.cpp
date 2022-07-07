#include <iostream>
#include "c1.h"
#include "Shape.h"
#include "Sphere.h"
#include <string>
using namespace std;
int main()
{
    double len,wid,hei;
    cin>>len>>wid>>hei;
    cout<<"Sphere:"<<len.getRadius()<<endl;
    cout<<"Cuboid:"<<len.get()<<endl;
    return 0;
}