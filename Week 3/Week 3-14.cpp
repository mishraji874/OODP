#include<iostream>
using namespace std;

class Add
{
    public:
    float r,i;
    static float addreal(float r1,float r2)
    {
        return r1+r2;
    }
    static float addcomp(float i1,float i2)
    {
        return i1+i2;
    }
}ob1,ob2;
int main()
{
    cout << "Enter real part of first complex: ";cin >>ob1.r;
    cout << "Enter imaginary part of first complex: ";cin >>ob1.i;
    cout << "Enter real part of second complex: ";cin >>ob2.r;
    cout << "Enter imaginary part of second complex: ";cin >>ob2.i;
    cout << "Sum of Real Parts: " << Add::addreal(ob1.r,ob2.r) << endl;
    cout << "Sum of Imaginary Parts: " << Add::addcomp(ob1.i,ob2.i) << endl;
    return 0;
}