#include<iostream>
#include<cstring>
using namespace std;

class strfunc
{
    public:
    void get_Str()
    {
        string str;
        cout << "Enter a string" << endl;
        getline(cin,str);
        print_Str(str);
    }
    void print_Str(string str)
    {
        int i;
        cout << "String in lower case: " << endl;
        for(i=0;i<str.length();i++)
            cout << (char)tolower(str[i]) << "";
        cout << endl;
        cout << "String in upper case: " << endl;
        for(i=0;i<str.length();i++)
            cout << (char)toupper(str[i]) << "";
        cout << endl;
        return;
    }

}obj;

int main()
{
    obj.get_Str();
    return 0;
}