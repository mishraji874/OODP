//OODP  -   ARRAYS,STRINGS AND FUNCTIONS    -   WEEK 2      -   Q.3

#include<iostream>

using namespace std;

int main()
{
    system("cls");
    int t1,t2,t3;
    cout << "*Program to find common terms in 3 sorted arrays*"<<endl;
    cout << "Enter Number of Elements in 1st array = ";
    cin >> t1;
    cout << "Enter Number of Elements in 2nd array = ";
    cin >> t2;
    cout << "Enter Number of Elements in 3rd array = ";
    cin >> t3;
    int i;
    int *a = new int[t1];
    int *b = new int[t2];
    int *c = new int[t3];
    cout << "Enter Elements in 1st Array ==>"<<endl;
    for(i=0;i<t1;i++)
    {
        cin >> a[i];
    }
    cout << "Enter Elements in 2nd Array ==>"<<endl;
    for(i=0;i<t2;i++)
    {
        cin >> b[i];
    }
    cout << "Enter Elemenrs in 3rd array ==>"<<endl;
    for(i=0;i<t3;i++)
    {
        cin >> c[i];
    }
    int l;
    int j,k;
    cout <<endl<<"Common terms in all 3 arrays are => ";
    for(i=0;i<t1;i++)
    {
        l = a[i];
        for(j=0;j<t2;j++)
        {
            if((l) == b[j])
            {
                for(k=0;k<t3;k++)
                {
                    if(l == c[k]){
                        cout << l << " ";
                        break;
                    }
                }
                break;
            }
        }
        l = NULL;
    }
    if(l == NULL)
        cout << "NO MATCHING TERMS\n"<< endl << "No matching terms in all 3 arrays"<<endl;
    return 0;
}