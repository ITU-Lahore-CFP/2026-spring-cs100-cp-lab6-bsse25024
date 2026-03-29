#include "functions.h"


int main() {
    int choice;
    int num;
    do {
        // Displaying the menu
        cout << "========== MENU ==========" << endl;
        cout << "1. Find Sum of Squares " << endl;
        cout << "2. Find Factorial 3" << endl;
        cout << "3. Exit" << endl;
        cout << "==========================" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << " Task A " << endl;
                cout << "Enter a number: ";
                cin >> num;
                cout << "Sum of squares: " << sumOfSquares(num) << endl;
                break;

            case 2:
                cout << " Task B " << endl;
                cout << "Enter a number: ";
                cin >> num;
                cout << "Factorial of the number is " << findFactorial(num) << endl;
                break;

            case 3:
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                // Handle invalid input
                cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
        }
    } while (choice != 3);
    return 0;
   
}