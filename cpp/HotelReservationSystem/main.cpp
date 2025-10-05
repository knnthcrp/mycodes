#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Guest {
    private:
        string name;
        string roomNum;
        string checkIn;
        string checkOut;
    public:
        Guest(string name = "", string roomNum = " ", string checkIn = " ", string checkOut = " ") {
            this -> name = name;
            this -> roomNum = roomNum;
            this -> checkIn = checkIn;
            this -> checkOut = checkOut;
        }
//      GETTERS
        string getName() { return name; }
        string getRoomNum() { return roomNum; }
        string getCheckIn() { return checkIn; }
        string getCheckOut() { return checkOut; }
        string getGuest() {
            string message = name + "\n"; 
            message += roomNum + "\n";
            message += checkIn + "\n";
            message += checkOut + "\n";
            return message;
        }
//      SETTERS
        void setName(string aName) { this  -> name = aName;}
        void setRoomNum(string aRoomNum) { this -> roomNum = aRoomNum;}
        void setCheckIn(string aCheckIn) { this -> checkIn = aCheckIn;}
        void setCheckout(string aCheckOut) { this -> checkOut = aCheckOut;}

};

class Room {
    private:
        string roomID;
        bool isAvailable;
    public:
        Room(string roomID = " ", bool isAvailable = false) {
            this -> roomID = roomID;
            this -> isAvailable = isAvailable;
        }
//      GETTERS
        string getRoomID() { return roomID;}
        bool getIsAvailable() { return isAvailable;}
        string getRoom() { 
            string message = "Room ";
            message += roomID;
            message += " || ";
            message += (isAvailable ? "Vacant" : "Occupied");
            return message;
        }
//      SETTERS
        void setRoomID(string aRoomID) { this -> roomID = aRoomID;}
        void setIsAvailable(bool aIsAvailable) { this -> isAvailable = aIsAvailable;}
};

void showMenu();
void displayAllRooms(vector<Room> firstFloor);
void makeReservation(string name, string roomNum, string checkIn, string checkOut, vector <Guest>& reservations, vector <Room> &firstFloor);
void displayAllReservations(vector<Guest> reservations);

int main() {
int choice;
string name, checkIn, checkOut, roomNum, input;

vector <Room> firstFloor{
    Room( "101", true),
    Room( "102", true),
    Room( "103", true),
    Room( "104", true),
    Room( "105", false)
};
vector <Guest> reservations  = {
    Guest("Nabunturan", "105", "2025-10-10", "2025-10-11")
};

do {
showMenu();
    getline(cin, input);
    choice = stoi(input);

switch (choice) {
    case 1:
        displayAllRooms(firstFloor);
        break;
    case 2:
        makeReservation(name, roomNum, checkIn, checkOut, reservations, firstFloor);
        break;
    case 3:
        displayAllReservations(reservations);
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        cout << "Exiting program...";
        break;
    default:
        cout << "Invalid input";
};
}
while (choice != 6);
    return 0;
} 
// FUNCTIONSSSSS
void showMenu() {
    cout << "\n===== HOTEL RESERVATION MENU =====" << endl;
    cout << "1. Display all rooms" << endl;
    cout << "2. Make a reservation" << endl;
    cout << "3. View all reservations" << endl;
    cout << "4. Update reservation" << endl;
    cout << "5. Cancel reservation" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter choice: ";
}   
void displayAllRooms(vector<Room> firstFloor) {
    cout << "\n===== LIST OF ROOMS =====" << endl;
    for (int i = 0; i < firstFloor.size(); i++) {
    cout << firstFloor[i].getRoom() << endl;
}
}
void makeReservation(string name, string roomNum, string checkIn, string checkOut, vector <Guest>& reservations, vector <Room> &firstFloor) {
cout << "Enter guest name: ";
getline(cin, name);

cout << "Enter room number: ";
getline(cin, roomNum);
bool found = false;
    for (int i = 0; i < size(firstFloor); i++){
        if (roomNum == firstFloor[i].getRoomID()) {
        found = true;
        if (firstFloor[i].getIsAvailable()) 
                cout << "Enter check-in date: ";
                getline(cin, checkIn);
                cout << "Enter check-out date: ";
                getline(cin, checkOut);
                cout << "\n";
                Guest newGuest(name, roomNum, checkIn, checkOut );
                reservations.push_back(newGuest);
                firstFloor[i].setIsAvailable(false);
                cout << "Room succesfully reserved";
        }
        else {
            cout << "Sorry, the room is not available. Please choose another room";
        };
        break;
    }

}
void displayAllReservations(vector<Guest> reservations) {
    cout << "\n===== LIST OF RESERVATIONS =====" << endl;
    for (int i = 0; i < reservations.size(); i++) {
    cout << reservations[i].getGuest() << endl;
    }
}
void updateReservation(vector<Guest> reservations) {
    string input, changed;
    int choice;


    cout << "What do you want to update?\n 1. Name\n 2. Room Number \n 3. Check in date \n 4. Check out date \n";
    cin >> choice;
    cout << "Please enter your name: ";
    cin >> input;

    switch(choice){
        case 1: // name
            cout << "Enter your new name: ";
            cin >> changed;
            for(int i = 0; i < size(reservations); i++) {
                if (input == reservations[i].getName()) {
                    reservations[i] = changed;
                }
                else {
                    cout << "Sorry, we can not find your reservation";
                }
        break;
        case 2:
            cout << "Please enter your new room number";
            
        break;
        case 3: 

        break;
        case 4: 

        break;
    }

    }


}

