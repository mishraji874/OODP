#include<iostream>
using namespace std;

class Circle
{
    public:
    float peri(float r)
    {
        return 2*3.14*r;
    }
    float area(float r)
    {
        return 3.14*r*r;
    }
}obj;

int main()
{
    float r;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "\nCircumference: " << obj.peri(r);
    cout << "\nArea: " << obj.area(r) << endl;
    return 0;
}