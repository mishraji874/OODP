#include<iostream>
using namespace std;

class Average
{
    public:
    //static float a,b,c;
    static void avg(float a, float b, float c)
    {
        cout << "Average: " << (a+b+c)/3 << endl;
    }

};

int main()
{
    float a,b,c;
    cout << "Enter any three numbers:\n";
    cin >> a >> b >> c;
    Average::avg(a,b,c);
    return 0;
}