#include <iostream>
using namespace std;
int main()
{
    string word;
    cout << "Enter a string : ";
    getline(cin, word);
    int count_alpha = 0, count_num = 0;
    int l = word.length(); // to find length of the string
    for (int i = 0; i < l; i++)
    {
        if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z'))
            count_alpha = count_alpha + 1;
        else if (word[i] >= '0' && word[i] <= '9')
            count_num = count_num + 1;
    }
    cout << "Number of Alphabets = " << count_alpha << endl;
    cout << "Number of Numbers = " << count_num << endl;
    return 0;
}