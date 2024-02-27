#include<iostream>
using namespace std;

class Placement
{
    public:
    string name;
    char gender;
    float cgpa,back;
    bool isValid()
    {
        if(back==0 && cgpa>=6.0)
            return true;
        else 
            return false;
    }
}stud;
int main()
{
    cout << "Enter the name of student: "; getline(cin,stud.name);
    cout << "\nEnter the gender of student (M/F): "; cin >> stud.gender;
    cout << "\nEnter the CGPA of the student: "; cin >> stud.cgpa;\
    cout << "\nEnter the number of backlogs of the student: "; cin >> stud.back;
    if(stud.isValid())
        cout << stud.name << " is eligible to sit for placement" << endl;
    else
        cout << stud.name << " is not eligible to sit for placement" << endl;
    return 0;
}