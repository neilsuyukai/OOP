#ifndef Rectangle_H
#define Rectangle_H
class Rectangle
{
    private:
    double width;
    double height;
    public:
    void setWidth(double x);
    void setHeight(double y);
    double getWidth();
    double getHeight();
    double getArea();
};
#endif