#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, num, i = 100;
    cout << "Numbers betweeen 100 and 400 whose digit is even:\n"
         << endl;
    for (i = 100; i < 400; i++)
    {
        num = i;
        n1 = num % 10;
        num = num / 10;
        n2 = num % 10;
        num = num / 10;
        n3 = num % 10;
        if ((n1 % 2 == 0) && (n2 % 2 == 0) && (n3 % 2 == 0))
        {
            if (i < 400)
            {
                cout << i << ",";
            }
            else if (i == 400)
            {
                cout << i;
            }
        }
    }
    return 0;
}