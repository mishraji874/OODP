#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Numbers divisible by 8 and 5 between 1000 and 2000:\n";
    for (i = 1000; i <= 2000; i++)
    {
        if ((i % 8 == 0) && (i % 5 == 0))
        {
            cout <<i<<"\n";
        }
    }
    return 0;
}