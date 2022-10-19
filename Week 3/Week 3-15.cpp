#include<iostream>
using namespace std;

class Factway
{   
    public:
    int n,fact=1;
    void factin();
}ob;

void Factway::factin()
{
    while(n!=1)
    {
        fact*=n;
        n--;
    }
    return;
}

int main()
{
    cout << "Enter a whole number to find out its factorial: ";
    cin >> ob.n;
    ob.factin();
    cout << "\nFactorial: " <<  ob.fact << endl;
    return 0;
}