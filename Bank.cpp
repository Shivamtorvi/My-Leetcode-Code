#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Account Holder Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount Deposited Successfully\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully\n";
        } else {
            cout << "Insufficient Balance\n";
        }
    }

    void display() {
        cout << "\nAccount Number: " << accNo;
        cout << "\nAccount Holder Name: " << name;
        cout << "\nBalance: " << balance << endl;
    }

    int getAccNo() {
        return accNo;
    }
};

int main() {
    BankAccount acc[10];
    int count = 0;
    int choice, accNo;

    do {
        cout << "\n--- BANK MENU ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            acc[count].createAccount();
            count++;
            break;

        case 2:
            cout << "Enter Account Number: ";
            cin >> accNo;
            for (int i = 0; i < count; i++) {
                if (acc[i].getAccNo() == accNo) {
                    acc[i].deposit();
                }
            }
            break;

        case 3:
            cout << "Enter Account Number: ";
            cin >> accNo;
            for (int i = 0; i < count; i++) {
                if (acc[i].getAccNo() == accNo) {
                    acc[i].withdraw();
                }
            }
            break;

        case 4:
            cout << "Enter Account Number: ";
            cin >> accNo;
            for (int i = 0; i < count; i++) {
                if (acc[i].getAccNo() == accNo) {
                    acc[i].display();
                }
            }
            break;

        case 5:
            cout << "Thank You for Using Bank System\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }
    } while (choice != 5);

    return 0;
}
