//OODP  -   ARRAYS,STRINGS AND FUNCTIONS    -   WEEK 2      -   Q.6

#include<iostream>

using namespace std;

int main()
{
    std::cout << "Enter a string = ";
    string sent;
    getline(cin,sent);
    int i,str_l = sent.length();
    int dec,dec2;
    char c,c2;
    for(i=0;i<str_l;i++)
    {
        c= (char)sent[i];
        c2 = (char)sent[i+1];
        dec = (int)c;
        dec2 = (int)c2;
        if((i==0) && (dec >= 97 && dec <= 122))
        {
            dec = dec - 32;
            c = (char)dec;
            sent[i] = c;
        }
        else if((dec == 32) && (dec2 >= 97 && dec2 <= 122) )
        {
            dec2 = dec2 - 32;
            c2 = (char)dec2;
            sent[i+1] = c2;
        }
    }
    std::cout << "Modified String = " << sent;
    return 0;
}