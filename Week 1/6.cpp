#include <iostream>
using namespace std;
int main()
{
    int key{3}, guess{};
    while (true)
    {
        cout << "Enter your guess: " << endl;
        cin >> guess;
        if (guess == key)
        {
            cout << "Well guessed!!";
            break;
        }
        else
        {
            cout << "Wrong guess!! Try again..\n"
                 << endl;
        }
    }
    return 0;
}