//OODP  -   ARRAYS,STRINGS AND FUNCTIONS    -   WEEK 2      -   Q.2 
#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter number of elements in the array = ";
    int n;
    cin >> n;
    int* a = new int[n],i;
    cout << "Enter elements in the array =>"<<endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int temp;
    bool flag = true; // true means > conditon checking and vice versa
    for(i=1;i<n;i++)
    {   
        if((a[i-1] > a[i]) && flag == true)
        {
            temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
        }
        else if((a[i] > a[i-1]) && (flag == false))
        {
            temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp ;
        }
        flag = !flag;
    }
    cout << "Array elements in zig-zag fashion = ";
    for(i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}