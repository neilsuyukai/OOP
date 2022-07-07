#include "Ball.h"
#include <math.h>
Ball::Ball(){
    radius=1;
}
Ball::Ball(double radius){
    this->radius=radius;
}
Ball::Ball(double radius,const string& color){
    this->radius=radius;
    this->setColor(color);
}
double Ball::getRadius()const{
    return radius;
}
void Ball::setRadius(double radius){
    this->radius=radius;
}
double Ball::getArea()const{
    return 4*3.14159*pow(radius,2);
}
double Ball::getVolume()const{
    return 4*3.14159*pow(radius,3)/3;
}