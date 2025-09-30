#include <iostream>
#include <string>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>

using namespace std;

string showMenu();
string landingPage();
string testODBCConnection(SQLHDBC hDbc);
SQLHDBC initODBCConnection(SQLHENV &hEnv);
void closeODBCConnection(SQLHENV hEnv, SQLHDBC hDbc);


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
    SQLHDBC hDbc = initODBCConnection(hEnv); //returns hDbc

cout << testODBCConnection(hDbc);

return 0;
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
    string message;

    message  = "=============================================\n";
    message += "   Welcome to the Student Expense Tracker!   \n";
    message += "=============================================\n\n";
    message += "Pick an option to get started:\n\n";
    message += "   [1] Sign in\n";
    message += "   [2] Sign up\n";
    message += "\n=============================================\n";

    return message;
}

string testODBCConnection(SQLHDBC hDbc) {
SQLRETURN ret;

    ret = SQLDriverConnectW(
        hDbc,
        NULL,
        (SQLWCHAR*)L"DSN=ExpenseTrackerDSN;", 
        SQL_NTS,
        NULL,
        0,
        NULL,
        SQL_DRIVER_COMPLETE
    );

    if (SQL_SUCCEEDED(ret)) {
        return "Connected successfully to the database";
    } else {
        return "Connection failed";
    }
}

SQLHDBC initODBCConnection(SQLHENV &hEnv) {
    SQLHDBC hDbc;

    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv); //environment
    SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (void*)SQL_OV_ODBC3, 0);
    SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc);    //connection

    return hDbc;
}

void closeODBCConnection(SQLHENV hEnv, SQLHDBC hDbc) {
    SQLDisconnect(hDbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
    SQLFreeHandle(SQL_HANDLE_ENV, hEnv);
}

