#include <iostream>
using namespace std;

int reg[5] = {123, 234, 345, 456, 567};
string comp[5] = {"suzuki", "crown", "toyota", "canter", "subaru"};
int rent[5] = {2000, 2500, 3000, 3500, 4000};
char avail[5] = {'y', 'y', 'y', 'y', 'y'};
int size = sizeof(reg) / sizeof(reg[0]);

void showFun()
{
    for (int i = 0; i < size; i++)
    {
        if (avail[i] == 'y')
        {
            cout << "Car " << comp[i] << " with reg " << reg[i] << " and with rent " << rent[i] << endl;
        }
    }
}

void reserveFun()
{
    int reg, days;
    cout << "enter registration number: ";
    cin >> reg;
    cout << "enter total days: ";
    cin >> days;
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (regNo == reg[i] && avail[i] == 'y')
        {
            found = true;
            avail[i] = 'n';
            int bill = rent[i] * days;
            cout << "your rent for " << comp[i] << "with reg" << reg[i] << "is: " << bill << endl;
        }
    }
}
int main()
{
    while (true)
    {
        cout << "car rental management" << endl;
        cout << "............." << endl;
        cout << "1.Show available cars" << endl;
        cout << "2.reserve a car." << endl;
        cout << "3.Return a car." << endl;
        cout << "4.Exit." << endl;
        int choice;
        cout << "enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            // available cars
            system("cls");
            showFun();
            cout
                << " " << endl;
        }
        else if (choice == 2)
        {
            // reserve a car
            system("cls");
            cout << " " << endl;
        }
        else if (choice == 3)
        {
            // return a car
            system("cls");

            cout << " " << endl;
        }
        else if (choice == 4)
        {
            system("cls");
            cout << "best of luck!" << endl;
            cout << " " << endl;
            break;
        }
        else
        {
            system("cls");
            cout << "invalid input" << endl;
        }
    }
}
