#ifndef Rectangle_H
#define Rectangle_H
class Rectangle
{
    private:
    double width;
    double height;
    static int numOfRect;
    public:
    Rectangle();
    Rectangle(double,double);
    void setWidth(double newWidth);
    double getWidth()const;
    
    void setHeight(double newHeight);
    double getHeight()const;
    
    double getArea()const;
    static int getNumOfRect();
};
#endif