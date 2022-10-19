#include<iostream>
using namespace std;

class Employee
{
    public:
    string name,address;
    int yr;
}ob1,ob2,ob3;

int main()
{
    ob1.name="Robert";ob1.yr=1994;ob1.address="64C- WallsStreat";
    ob2.name="Sam";ob2.yr=2000;ob2.address="68D- WallsStreat";
    ob3.name="John";ob3.yr=1999;ob3.address="26B- WallsStreat";
    cout << "Name\tYear of Joining\tAddress" << endl;
    cout << ob1.name << "\t" << ob1.yr << "\t" << ob1.address << endl;
    cout << ob2.name << "\t" << ob2.yr << "\t" << ob2.address << endl;
    cout << ob3.name << "\t" << ob3.yr << "\t" << ob3.address << endl;
    return 0;
}