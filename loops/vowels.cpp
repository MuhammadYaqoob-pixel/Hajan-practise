// #include<iostream>
// using namespace std;
// int main()
// {
    // char ch;
    // cout<<"Enter a character: ";
    // cin>>ch;
    // if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    // {
    //     cout<<" is a vowel";
    // }
    // else
    // {
    //     cout<<" is a consonant";
    // }
    #include <iostream>  // Include necessary library
    using namespace std; // Use the standard namespace
    
    int main() {
        int num1, num2, choice; // Declare three integer variables
    
        // Taking inputs from the user
        cout << "Enter first number: ";
        cin >> num1;
    
        cout << "Enter second number: ";
        cin >> num2;
    
        // Display menu options for the user
        cout << "Choose an operation:\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
    
        // Switch case to perform the chosen operation
        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2;
                break;
            case 2:
                cout << "Result: " << num1 - num2;
                break;
            case 3:
                cout << "Result: " << num1 * num2;
                break;
            case 4:
                if (num2 != 0)  // Prevent division by zero
                    cout << "Result: " << num1 / num2;
                else
                    cout << "Error: Division by zero!";
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4.";
        }
    
        return 0;
    }
    