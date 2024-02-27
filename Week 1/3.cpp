#include <iostream>
using namespace std;
int main()
{
    int base, exp, result;
    cout << "Enter a number:\n";
    cin >> base;
    cout << "Enter the power:\n";
    cin >> exp;
    for (int i = 0; i < exp; i++)
    {
        result = base * result;
    }
    cout << "Result= " << result;
    return 0;
}