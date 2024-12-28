#include <iostream>
using namespace std;

int reg[5] = {123, 234, 345, 456, 567};
string comp[5] = {"suzuki", "crown", "toyota", "canter", "subaru"};
int rent[5] = {2000, 2500, 3000, 3500, 4000};
char avail[5] = {'y', 'y', 'y', 'y', 'y'};
int size = sizeof(reg) / sizeof(reg[0]);

void showFun()
{
    bool availableCars = false;
    for (int i = 0; i < size; i++)
    {
        if (avail[i] == 'y')
        {
            cout << "Car " << comp[i] << " with reg " << reg[i] << " and with rent " << rent[i] << endl;
            availableCars = true;
        }
    }
    if (!availableCars)
    {
        cout << "No cars are currently available for rent." << endl;
    }
}

void reserveFun()
{
    int carReg, days;
    cout << "Enter registration number: ";
    cin >> carReg;
    cout << "Enter total days: ";
    cin >> days;

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (reg[i] == carReg && avail[i] == 'y')
        {
            found = true;
            avail[i] = 'n'; // Mark as reserved
            int bill = rent[i] * days;
            cout << "Your rent for " << comp[i] << " with reg " << reg[i] << " is: " << bill << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "This car is either not available or already reserved." << endl;
    }
}

void returnCar()
{
    int carReg;
    cout << "Enter the registration number of the car you want to return: ";
    cin >> carReg;

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (reg[i] == carReg && avail[i] == 'n')
        {
            avail[i] = 'y'; // Mark as available
            cout << "Car " << comp[i] << " with reg " << reg[i] << " has been successfully returned!" << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Car not found or not reserved." << endl;
    }
}

int main()
{
    while (true)
    {
        cout << "\nCar Rental Management" << endl;
        cout << "----------------------" << endl;
        cout << "1. Show available cars" << endl;
        cout << "2. Reserve a car" << endl;
        cout << "3. Return a car" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            // Show available cars
            showFun();
        }
        else if (choice == 2)
        {
            // Reserve a car
            reserveFun();
        }
        else if (choice == 3)
        {
            // Return a car
            returnCar();
        }
        else if (choice == 4)
        {
            cout << "Best of luck!" << endl;
            break; // Exit the program
        }
        else
        {
            cout << "Invalid input. Please try again." << endl;
        }
    }
    return 0; // Ensure the return statement is there to indicate successful execution
}