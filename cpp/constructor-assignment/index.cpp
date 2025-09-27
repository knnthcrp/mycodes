#include <iostream>

using namespace std;

class bankAccount{
    public:
        string accountName;
        int accountNumber;
        double balance;
        int pin;

    bankAccount(string accountName, int accountNumber, double balance, int pin) {
        this -> accountName = accountName;
        this -> accountNumber = accountNumber;
        this -> balance = balance;
        this -> pin = pin;
    }

    void displayAll() {
    cout << "\n******* ACCOUNT DETAILS *******" << endl;
    cout << "Account name       : " << accountName << endl;
    cout << "Account number     : " << accountNumber << endl;
    cout << "Balance            : " << balance << endl;
    cout << "PIN                : " << pin << endl;
    cout << "===============================\n" << endl ;
}
};



int main () {
bankAccount account1("Maria Santos",    100001, 2500.75, 1234);
bankAccount account2("Juan Dela Cruz",  100002, 5300.50, 5678);
bankAccount account3("Andrea Lopez",    100003, 15000.00, 4321);
bankAccount account4("Michael Tan",     100004, 890.25, 2468);
bankAccount account5("Sophia Reyes",    100005, 120000.99, 1357);

account1.displayAll();
account2.displayAll();
account3.displayAll();
account4.displayAll();
account5.displayAll();

}

