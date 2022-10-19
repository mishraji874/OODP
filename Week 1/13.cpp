#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string month{};

    cout << "Enter the month: " << endl;
    cin >> month;

    if (month == "january")
        cout << "Days: 31";

    else if (month == "february")
        cout << "Days: 28/29";

    else if (month == "march")
        cout << "Days: 31";

    else if (month == "april")
        cout << "Days: 30";

    else if (month == "may")
        cout << "Days: 31";

    else if (month == "june")
        cout << "Days: 30";

    else if (month == "july")
        cout << "Days: 31";

    else if (month == "august")
        cout << "Days: 31";

    else if (month == "september")
        cout << "Days: 30";

    else if (month == "october")
        cout << "Days: 31";

    else if (month == "november")
        cout << "Days: 30";

    else if (month == "december")
        cout << "Days: 31";  

    else 
        cout << "Wrong input!!";                   

    return 0;
}