#include <iostream>
using namespace std;
int main()
{
    string word;
    cout << "Enter the string:\n";
    cin >> word;
    int l = word.length();
    char *reverse;
    for (int i = 0; i < (l + 1); i++)
    {
        reverse[i] = word[l - 1 - i];
    }
    cout << "Reverse string=\n"
         << reverse;
    return 0;
}