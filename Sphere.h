#ifndef Sephere_H
#define Sephere_H
class Sphere
{
    private:
    double radius;
    public:
    Sphere();
    Sphere(double);
    void setRadius(double);
    double getRadius()const;
    void toString();
    double getVolume();
};
#endif