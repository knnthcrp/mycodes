#include <iostream>
#include <string>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>

using namespace std;

string showMenu();
string landingPage();

class Users {
    private:
        int userID;
        string username;
        string password;
    public:
        Users( string username, string password, int userID = -1) {
            this -> userID = userID;
            this -> username = username;
            this -> password = password;
        }

    int getUserId() { return userID;}
    string getUsername() {return username;}
    string getPassword() {return password;}

    void setUsername(string aUsername) {this -> username = aUsername;}
    void setPassword(string aPassword) {this -> password = aPassword;}
};


int main() {
SQLHENV hEnv;
SQLHDBC hDbc;
SQLRETURN ret;

SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv);
SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (void*)SQL_OV_ODBC3, 0);

SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc);

// Connect using DSN
    ret = SQLDriverConnectW(
        hDbc,
        NULL,
        (SQLWCHAR*)L"DSN=ExpenseTrackerDSN;", // replace with your DSN name
        SQL_NTS,
        NULL,
        0,
        NULL,
        SQL_DRIVER_COMPLETE
    );


if (SQL_SUCCEEDED(ret)) {
   cout << "koniktid";
} else {
    cout << "eror";
}

// Disconnect and clean up
SQLDisconnect(hDbc);
SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
SQLFreeHandle(SQL_HANDLE_ENV, hEnv);



}

string showMenu() {
    
    string menu = "Expense Tracker Menu:\n";
    menu += "1. Add Expense\n";
    menu += "2. View Expenses\n";
    menu += "3. Delete Expense\n";
    menu += "4. Exit\n";
    return menu;
}

string landingPage() {
    string welcomeMessage;

    welcomeMessage  = "=============================================\n";
    welcomeMessage += "   Welcome to the Student Expense Tracker!   \n";
    welcomeMessage += "=============================================\n\n";
    welcomeMessage += "Pick an option to get started:\n\n";
    welcomeMessage += "   [1] Sign in\n";
    welcomeMessage += "   [2] Sign up\n";
    welcomeMessage += "\n=============================================\n";

    return welcomeMessage;
}
