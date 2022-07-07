#ifndef Rectangle_H
#define Rectangle_H
class Rectangle
{
    private:
    double width;
    double height;
    public:
    Rectangle();
    Rectangle(double newWidth,double newHeight);
    double getArea();
    double getPerimeter();
    void setWidth(double);
    void setHeight(double);
};
#endif