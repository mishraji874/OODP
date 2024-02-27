//OODP  -   ARRAYS,STRINGS AND FUNCTIONS    -   WEEK 2      -   Q.5

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    cout << "Enter a string : ";
    getline(cin,s1);
    int dec,i,l = s1.length();
    char change;
    for(i=0;i<l;i++)
    {
        change = (char)s1[i];
        dec = (int)change;
        if(dec == 122)
            dec = 97;
        else if(dec == 90)
            dec = 65;
        else
            dec++;
        change = (char)dec;
        s1[i] = change;
    }
    cout << "Modified String = " << s1;
}