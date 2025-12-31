#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum) {
        accountNumber=accNum;
        balance=0.0;
    }
    void deposit(double amount) {
        if (amount>0) {
            balance+=amount;
            cout << "Successfully deposited $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw method
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Successfully withdrew $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds! Current balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
    void checkBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
    string getAccountNumber() {
        return accountNumber;
    }
};
int main() {
    cout << "Simple Bank Account System" << endl;
    BankAccount account("ACC123456");
    cout << "Account created: " << account.getAccountNumber() << endl;
    cout << "\nTesting Deposits" << endl;
    account.deposit(1000.0);
    account.deposit(500.0);
    account.deposit(-100.0); 
    cout << "\nChecking Balance" << endl;
    account.checkBalance();
    cout << "\nTesting Withdrawals" << endl;
    account.withdraw(300.0);
    account.withdraw(1500.0); 
    account.withdraw(-50.0);
    
    cout << "\nFinal Balance " << endl;
    account.checkBalance();
    
    return 0;
}