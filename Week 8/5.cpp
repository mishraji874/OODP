#include <iostream>
using namespace std;
class Shape
{
protected:
    double width, height;

public:
    void setdata(double a, double b)
    {
        width = a;
        height = b;
    }
    virtual double area() = 0;
};
class Rectangle : public Shape
{
public:
    double area()
    {
        return (width * height);
    }
};
class Triangle : public Shape
{
public:
    double area()
    {
        return (width * height) / 2;
    }
};
int main()
{
    Shape *sptr;
    Rectangle Rect;
    sptr = &Rect;
    sptr->setdata(5, 3);
    cout << "Area of Rectangle is " << sptr->area() << endl;
    Triangle Tri;
    sptr = &Tri;
    sptr->setdata(4, 6);
    cout << "Area of Triangle is " << sptr->area() << endl;
    return 0;
}