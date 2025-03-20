#include<iostream>
using namespace std;
int main()
{
    // int num1, num2, choice;
    // cout << "Enter first number: ";
    // cin >> num1;
    // cout << "Enter second number: ";
    // cin >> num2;
    // cout << "Choose an operation:\n";
    // cout << "1. Addition (+)\n";
    // cout << "2. Subtraction (-)\n";
    // cout << "3. Multiplication (*)\n";
    // cout << "4. Division (/)\n";
    // cout << "Enter your choice (1-4): ";
    // cin >> choice;
    // switch (choice) {
    //     case 1:
    //         cout << "Result: " << num1 + num2;
    //         break;
    //     case 2:
    //         cout << "Result: " << num1 - num2;
    //         break;
    //     case 3:
    //         cout << "Result: " << num1 * num2;
    //         break;
    //     case 4:
    //         if (num2 != 0)
    //             cout << "Result: " << num1 / num2;
    //         else
    //             cout << "Error: Division by zero!";
    //         break;                              
    //     default:
    //         cout << "Invalid choice! Please enter a number between 1 and 4.";
    // }
    // check number is even or odd
    // int num;
    // cout << "Enter an integer: ";
    // cin >> num;
    // if (num % 2 == 0)
    //     cout << num << " is even.";
    // else
    //     cout << num << " is odd.";
    // three number check ehich is maximum
     int num1, num2, num3;
     cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
        if (num1 >= num2 && num1 >= num3)
            cout << "Largest number: " << num1;
        else if (num2 >= num1 && num2 >= num3)
            cout << "Largest number: " << num2;
        else
            cout << "Largest number: " << num3;
    return 0;
}