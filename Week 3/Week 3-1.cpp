#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll_no;
}obj1;
int main()
{
    obj1.name="John";
    obj1.roll_no=2;
    cout << "Initialized values:" << endl;
    cout << obj1.name << endl;
    cout << obj1.roll_no << endl;
    return 0;
}