//Since no criteria was given in question
//hra=50% of bp
//ta=50% of bp
//da=50% of bp
/*
gp: 1 --> 18,000 bonus
gp: 2 --> 25,000 bonus
gp: 3 --> 32,000 bonus
gp: 4 --> 39,000 bonus
gp: 5 and above --> 69,000 bonus
That's all

Deduction: 5% from bp
*/
#include<iostream>
using namespace std;

class Payroll
{
    public:
    string name,id;
    float bp,hra,ta,da,gp,d,grp;
    void Pay()
    {
        hra=0.5*bp;
        ta=0.5*bp;
        da=0.5*bp;
        if(gp==1)
            gp=18000;
        else if(gp==2)
            gp=25000;
        else if(gp==3)
            gp=32000;
        else if(gp=4)
            gp=39000;
        else if(gp>=5)
            gp=69000;
        d=0.05*bp;
        grp=bp+hra+ta+da+gp-d;
        cout << "Gross Pay: " << grp << endl;
        return;
    }
}ob;
int main()
{
    cout << "Enter name of employee: "; getline(cin,ob.name);
    cout << "\nEnter Employee ID: "; cin >> ob.id;
    cout << "\nEnter basic pay of Employee: "; cin >> ob.bp;
    cout << "\nEnter grade pay of Employee: "; cin >> ob.gp;
    ob.Pay();
    return 0;
}