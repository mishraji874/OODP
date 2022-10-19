#include<iostream>
#include<math.h>
using namespace std;

class Triangle
{
    public:
    void peri(int a,int b, int c)
    {
        cout << "Perimeter: " << a+b+c << endl;
        area(a,b,c);
    }
    void area(int a, int b, int c)
    {
        float s=((float)(a+b+c))/2.0;
        float ar=pow(s*(s-a)*(s-b)*(s-c),0/5);
        cout << "Area: " << ar << endl;
        return; 
    }

}obj;

int main()
{
    obj.peri(3,4,5);
    return 0;
}