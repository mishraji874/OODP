#include<iostream>
using namespace std;

class AddDistance
{
    public:
    float i1,i2;
    void add()
    {
        cout << "\nSum :" << i1+i2 << endl;
        return;
    }
}ob;

int main()
{
    cout << "Enter two distances in inches:" << endl;
    cin >> ob.i1 >> ob.i2;
    ob.add();
    return 0;
}