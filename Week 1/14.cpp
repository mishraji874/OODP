#include <iostream>
using namespace std;
int main()
{
    int n1, n2, sum;
    cout << "Enter the two numbers:\n";
    cin >> n1 >> n2;
    sum = n1 + n2;
    if (sum >= 105 && sum <= 200)
    {
        sum = 200;
    }
    cout << "Sum is " << sum;
    return 0;
}