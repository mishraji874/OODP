#include<iostream>
using namespace std;

class Room
{
    public:
    float l,b,h;
    float Area()
    {
        return l*b;
    }
    float Vol()
    {
        return l*b*h;
    } 
}room1,room2;

int main()
{
    cout << "Enter length of room 1: "; cin >> room1.l;
    cout << "Enter breadth of room 1: "; cin >> room1.b;
    cout << "Enter height of room 1: "; cin >> room1.h;
    cout << "Enter length of room 2: "; cin >> room2.l;
    cout << "Enter breadth of room 2: "; cin >> room2.b;
    cout << "Enter height of room 2: "; cin >> room2.h;
    cout << "Area of Room 1: " << room1.Area() << endl;
    cout << "Volume of Room 1: " << room1.Vol() << endl;
    cout << "Area of Room 2: " << room2.Area() << endl;
    cout << "Volume of Room 2: " << room2.Vol() << endl;
    return 0;
}