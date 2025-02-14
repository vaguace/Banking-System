#include <iostream>
using namespace std;

int main() {
    double balance = 0.0;
    int choice;
    
    do {
        cout << "\nBANKING SYSTEM\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        
        if (choice == 1) {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful! New balance: $" << balance << "\n";
            } else {
                cout << "Invalid amount. Try again.\n";
            }
        } else if (choice == 2) {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful! New balance: $" << balance << "\n";
            } else {
                cout << "Insufficient funds or invalid amount!\n";
            }
        } else if (choice == 3) {
            cout << "Current balance: $" << balance << "\n";
        } else if (choice == 4) {
            cout << "Thank you for using our service!\n";
        } else {
            cout << "Invalid option. Try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}
