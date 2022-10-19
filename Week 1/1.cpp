#include <iostream>
using namespace std;
int main()
{
    cout << "Calculator Program\n";
    int n1, n2, choice, result;
    cout << "Enter the first number:\n";
    cin >> n1;
    cout << "Enter the second number:\n";
    cin >> n2;
    cout << "Choose operation from the menu:" << endl;
    cout << "1.Addition\n";
    cout << "2.Subtraction\n";
    cout << "3.Multiplication\n";
    cout << "4.Division\n";
    cout << "5.Modulus\n";
    cout << "Enter your choice:\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = n1 + n2;
        cout << "Result= " << result << endl;
        break;
    case 2:
        result = n1 - n2;
        cout << "Result= " << result << endl;
        break;
    case 3:
        result = n1 * n2;
        cout << "Result= " << result << endl;
        break;
    case 4:
        result = n1 / n2;
        cout << "Result= " << result << endl;
        break;
    case 5:
        result = n1 % n2;
        cout << "Result= " << result << endl;
        break;
    default:
        cout << "Invalid choice entered" << endl;
        break;
    }
    return 0;
}