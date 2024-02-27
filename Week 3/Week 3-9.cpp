#include<iostream>
using namespace std;

class Car
{
    public:
    float price,weight,length,gc;
    string ft,name;
    void Display()
    {
        cout << endl;
        cout << "Name of the car: " << name << endl;
        cout << "Fuel Type of the car: " << ft << endl;
        cout << "Price of the car: " << price << endl;
        cout << "Weight of the car: " << weight << endl;
        cout << "Length of the car: " << length << endl;
        cout << "Ground Clearance of the car: " << gc << endl;
        return;
    }
}cust;

int main()
{
    cout << "Enter the name of the car: "; getline(cin,cust.name);
    cout << "\nEnter the fuel type of the car: "; cin >> cust.ft;
    cout << "\nEnter the price of the car: "; cin >> cust.price;
    cout << "\nEnter the weight of the car: "; cin >> cust.weight;
    cout << "\nEnter the length of the car: "; cin >> cust.length;
    cout << "\nEnter the ground clearance of the car: "; cin >> cust.gc;
    cust.Display();
    return 0;
}