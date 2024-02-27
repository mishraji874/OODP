#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void area() = 0;
};
class Rectangle : public Shape
{
private:
    int l;
    int b;

public:
    Rectangle(int x, int y)
    {
        l = x;
        b = y;
    }
    void area()
    {
        cout << "Area of rectangle is: " << (l * b) << endl;
    }
};
class Circle : public Shape
{
private:
    int r;

public:
    Circle(int x)
    {
        r = x;
    }
    void area()
    {
        cout << "Area of circle is: " << (3.142 * r * r) << endl;
    }
};
class Square : public Shape
{
private:
    int s;

public:
    Square(int x)
    {
        s = x;
    }
    void area()
    {
        cout << "Area of square is: " << (s * s) << endl;
    }
};
int main()
{
    Shape *s;
    s = new Rectangle(10, 20);
    s->area();
    s = new Circle(2);
    s->area();
    s = new Square(4);
    s->area();
    return 0;
}