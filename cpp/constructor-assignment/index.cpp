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
    void displayBal() {
    cout << "\nHello! " << accountName << " your remaining balance is PHP"<< balance << endl;
    }
};



int main () {
bankAccount account1("Maria Santos",    100001, 2500.75, 1234);
bankAccount account2("Juan Dela Cruz",  100002, 5300.50, 5678);
bankAccount account3("Andrea Lopez",    100003, 15000.00, 4321);


int choice; // 1.View account 2. Check balance 3. View All accounts  4. Exit
char accChoice;

cout << "\n===== MENU =====" << endl;
cout << "1. View account" << endl;
cout << "2. Check balance" << endl;
cout << "3. View all accounts" << endl;
cout << "4. Exit" << endl;
cout << "Enter your choice: " << endl;
cin >> choice;

switch (choice) {
    case 1: // view 1 acc
        cout << "\n***** Choose your Account Name *****\n" << endl;
        cout << "a. " << account1.accountName << endl;
        cout << "b. " << account2.accountName << endl;
        cout << "c. " << account3.accountName << endl;
        cout << "Enter your choice: ";
        cin >> accChoice;

        switch(accChoice) {
            case 'a':
                account1.displayAll();
                break;
            case 'b':
                account2.displayAll();
                break;
            case 'c':
                account3.displayAll();
                break;
            default:
                cout << "Account not found.\n";
                break;
        }
    break;
    case 2: // view bal
        cout << "***** Choose your Account Name *****" << endl;
        cout << "a. " << account1.accountName << endl;
        cout << "b. " << account2.accountName << endl;
        cout << "c. " << account3.accountName << endl;
        cout << "Enter your choice: ";
        cin >> accChoice;

        if (accChoice == 'a') {
            account1.displayBal();
        }
        else if (accChoice == 'b') {
            account2.displayBal();
        }
        else if (accChoice == 'c') {
            account3.displayBal();
        }
        else {
            cout << "Account not found";
        }
    break;
    case 3: // view all
        account1.displayAll();
        account2.displayAll();
        account3.displayAll();
    break;
    case 4: // exit
        exit(0);
    break;

        
}

}

