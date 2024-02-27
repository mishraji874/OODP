//OODP  -   ARRAYS,STRINGS AND FUCNTIONS    -   WEEK 2      -   Q.7
//Ignore 0th and (n-1)th element due to lack of 2 adjacent elements
//multiplication shoudl be based on old value of elements
#include<iostream>

using namespace std;

int main()
{
    cout << "Enter number of elements in the array = ";
    int n;
    cin >> n;
    int i,a[n];
    cout << "Enter values of elements of the array ==>"<<endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int m = n-2;
    int newone[m];
    for(i=0;i<(n-1);i++)
    {
        newone[i] = a[i] * a[i+2];
    }
    for(i=1;i<(n-1);i++)
    {
        a[i] = newone[i-1];
    }
    cout << "Modified Array =>";
    for(i=0;i<n;i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}