#include "Cube.h"
#include <math.h>
Cube::Cube(){
    length=1;
}
Cube::Cube(double length){
    this->length=length;
}
Cube::Cube(double length,const string&color){
    this->length=length;
    this->setColor(color);
}
double Cube::getLength()const{
    return length;
}
void Cube::setLength(double length){
    this->length=length;
}
double Cube::getArea()const{
    return 6*pow((length),2);
}
double Cube::getVolume()const{
    return pow(length,3);
}