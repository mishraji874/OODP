#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your password : ";
    string pwd;
    getline(cin, pwd);
    int count_conditions = 0, countsa = 0, count_ca = 0, count_c = 0, count_n = 0;
    int l = pwd.length();
    int i = 0;
    for (; i < l; i++)
    {
        if (pwd[i] >= 65 && pwd[i] <= 90)
        {
            countsa = countsa + 1;
            if (countsa == 1)
                count_conditions = count_conditions + 1;
        }
        else if (pwd[i] >= 97 && pwd[i] <= 122)
        {
            count_ca = count_ca + 1;
            if (count_ca == 1)
                count_conditions = count_conditions + 1;
        }
        else if ((pwd[i] >= 32 && pwd[i] <= 47) || (pwd[i] >= 58 && pwd[i] <= 64) || (pwd[i] >= 91 && pwd[i] <= 96) || (pwd[i] >= 123 && pwd[i] <= 126))
        {
            count_c = count_c + 1;
            if (count_c == 1)
                count_conditions = count_conditions + 1;
        }
        else if (pwd[i] >= 48 && pwd[i] <= 57)
        {
            count_n = count_n + 1;
            if (count_n == 1)
                count_conditions = count_conditions + 1;
        }
    }
    if (l >= 6 && l <= 16)
    {
        count_conditions = count_conditions + 1;
    }
    if (count_conditions == 5)
        cout << "Valid Password";
    else
        cout << "Invalid Password";
    return 0;
}