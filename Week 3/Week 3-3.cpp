#include<iostream>
using namespace std;
class Date
{   
    public:
    int day,month,year;
    
    void read()
    {
        cout << "All entries in numbers please\n"; 
        cout << " Enter the day: "; cin >> day;
        cout << "\nEnter the month: "; cin >> month;
        cout << "\nEnter the year: "; cin >> year;
        return;
    }
    void print()
    {
        cout << "\nD/M/Y format: " << day << "/" << month << "/" << year << endl;
        cout << "\nM/D/Y format: " << month << "/" << day << "/" << year << endl;
        return;
    }
    void one()
    {
        cout << "Date after one week (D/M/Y): ";
        if(day>=22)
        {
            if(day>=22 && month==2)
            {
                if(year%4!=0)
                    cout << (day+7)-28 << '/' << month+1 << '/' << year << endl;
                else if((year%4==0 && year%10!=0)||((year%100==0)&&(year%4==0)))
                    cout << (day+7)-29 << '/' << month+1 << '/' << year << endl;
            }
            else if (month==4||month==6||month==9||month==11)
                cout << (day+7)-30 << '/' << month+1 << '/' << year << endl;
            else
                cout << (day+7)-31 << '/' << month+1 << '/' << year << endl;
        }
        else
            cout << day+7 << '/' << month << '/' << year << endl;
        return;
    }
}ob;
int main()
{
    ob.read();
    ob.print();
    ob.one();
    return 0;
}