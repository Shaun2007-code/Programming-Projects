#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    string accountNumber;
    string accountType;
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void createAccount() {
        cout << "Enter Account Holder Name: ";
        getline(cin >> ws, name);  // ws clears input buffer
        cout << "Enter Account Number: ";
        getline(cin, accountNumber);
        cout << "Enter Account Type (Savings/Current): ";
        getline(cin, accountType);
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cout << "Account Created Successfully!\n\n";
    }

    void showAccount() {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: AED " << balance << endl << endl;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Deposited AED " << amount << " successfully.\n";
        } else {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawn AED " << amount << " successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n===== Bank Menu =====\n";
        cout << "1. Create Account\n";
        cout << "2. Show Account Details\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
        case 1:
            account.createAccount();
            break;
        case 2:
            account.showAccount();
            break;
        case 3:
            account.deposit();
            break;
        case 4:
            account.withdraw();
            break;
        case 5:
            cout << "Thank you for using the Banking System!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
