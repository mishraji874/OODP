#include <iostream>
using namespace std;
void reverse(string sample)
{
    int strlen = sample.length();
    cout << "Reverse string=\n";
    for (int i = 0; i < strlen; i++)
    {
        cout << sample[strlen - 1 - i];
    }
}

int main()
{
    string sample;
    cout << "Enter a string:\n";
    cin >> sample;
    reverse(sample);
    return 0;
}