#include<iostream>
using namespace std;

class Trial
{
    public:
    string name,grade;
    int roll_no;
}obj1,obj2;

int main()
{
    obj1.name="Big Boss";
    obj1.grade="S";
    obj1.roll_no=7;
    obj2.name="Solid Snake";
    obj2.grade="S";
    obj2.roll_no=30;
    cout << "Attributes of Object 1:" << endl;
    cout << obj1.name << " " << obj1.roll_no << " " << obj1.grade << endl;
    cout << "Attributes of Object 2:" << endl;
    cout << obj2.name << " " << obj2.roll_no << " " << obj2.grade << endl;
    return 0;
}