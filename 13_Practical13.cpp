// Program to illustrate the concept of a friend class

#include <iostream>
using namespace std;

class BankManager;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        cout << "Enter initial balance: Rs. ";
        cin >> balance;
    }

    void showBalance() {
        cout << "\nAccount Balance: Rs. " << balance << endl;
    }

    // BankManager is a friend class
    friend class BankManager;
};

class BankManager {
public:
    void accessAccount(BankAccount account) {
        // Accessing private member of BankAccount
        cout << "\nBank Manager can access balance: Rs. " << account.balance << endl;
    }
};

int main() {
    BankAccount account;
    BankManager manager;

    account.showBalance();

    manager.accessAccount(account);

    cout << "\nName: Prabhjot Singh" << endl;
    cout << "URN: 2514143" << endl;

    return 0;
}