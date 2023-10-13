#include <iostream>
#include <string>

class Bank {
private:
    std::string accountHolder;
    double balance;

public:

    Bank(const std::string& name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Insufficient funds. Balance: $" << balance << std::endl;
        }
    }
    void displayAccountInfo() {
        std::cout << "Account Holder: " << accountHolder << std::endl;
        std::cout << "Account Balance: $" << balance << std::endl;
    }
};

int main() {
    
    Bank myAccount("John Doe", 1000.0);
    myAccount.displayAccountInfo();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayAccountInfo();

    return 0;
}
