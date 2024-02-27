#include <iostream>
using namespace std;
int main()
{
    int m, n; // m = rows, n = columns
    cout << "Enter Number of Rows in Matrix = ";
    cin >> m;
    cout << "Enter Number of Columns in Matrix = ";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        if (i == 0)
            cout << "[";
        cout << "[";
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i * j;
            cout << arr[i][j];
            if (j < n - 1)
                cout << ",";
        }
        if (i < m - 1)
            cout << "],";
        else if (i < m)
            cout << "]]";
    }
    return 0;
}