#include <iostream>
using namespace std;
int main()
{
    int i = 0, j, ts = 0;
    for (ts = 0; ts < 11; ts++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "* ";
        }
        if (ts < 5)
        {
            i++;
        }
        else
            i--;
        cout << endl;
    }
    return 0;
}