#ifndef Rectangle_H
#define Rectangle_H
class Rectangle
{
    private:
    double width;
    double height;
    public:
    Rectangle();
    Rectangle(double,double);
    void setWidth(double);
    void setHeight(double);
    double getWidth();
    double getHeight();
    double getArea();
};
#endif