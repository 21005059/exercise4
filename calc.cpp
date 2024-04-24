#include<iostream>
using namespace std;


int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);

int main()
{
    int choice, num1, num2;
    char ch;

    do
    {
        cout << "============================"<<endl;
        cout << "MENU" << endl;
        cout << "============================"<<endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice < 1 || choice > 4)
        {
            cout << "Invalid choice. Please enter again." << endl;
            continue;
        }

        cout << "Enter two integers: ";
        cin >> num1;
        cout << "Enter two integers: ";
        cin >> num2;

        switch(choice)
        {
            case 1:
                cout << "Sum: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Difference: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Product: " << multiply(num1, num2) << endl;
                break;
            case 4:
                if(num2 == 0)
                {
                    cout << "The second integer is zero, divide by zero." << endl;
                }
                else
                {
                    cout << "Quotient: " << divide(num1, num2) << endl;
                }
                break;
        }

        cout << "Press 'y' or 'Y' to continue: ";
        cin >> ch;
    }
    while(ch == 'y' || ch == 'Y');

    return 0;
}


int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}