//OODP  -   ARRAYS,STRINGS AND FUNCTIONS    -   WEEK 2      -   Q.8

#include<iostream>

using namespace std;

int main()
{
    cout <<"Total Number of Integers to be entered = ";
    int n;
    cin >> n;
    int i,m = (2*n) - 1;
    cout << "Enter Integers ==>" << endl;
    int a[m],f = n,temp,count = 0;
    char c;
    for(i=0;i<f;i++)
    {
        cin >> a[i];
    }
    for(i=1;i<f;i++)
    {
        if((a[i] % 2 == 1) && (a[i-1] % 2 == 0))
        {
            temp = a[i];
            c = '-';
            a[i] = (int)c;
            a[i+1] = temp;
            count = count + 1;
        }
        count  = count + 1;
    }
    cout << "Final Array = ";
    for(i=0;i<count;i++)
    {
        cout << a[i] << " "; 
    }
    return 0;
}