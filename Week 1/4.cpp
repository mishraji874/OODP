#include <iostream>
using namespace std;
void minimum(int n1, int n2, int n3)
{
    int r;
    cout << "Minimum of 3 numbers is:";
    if (n1 < n2)
    {
        r = n1;
    }
    else
    {
        r = n2;
    }
    if (n3 < r)
    {
        r = n3;
    }
    cout << r;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers:\n";
    cin >> num1 >> num2 >> num3;
    minimum(num1, num2, num3);
    return 0;
}