#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Guest {
    private:
        string name;
        int roomNum;
        string checkIn;
        string checkOut;
    public:
        Guest(string name = "", int roomNum = 0, string checkIn = " ", string checkOut = " ") {
            this -> name = name;
            this -> roomNum = roomNum;
            this -> checkIn = checkIn;
            this -> checkOut = checkOut;
        }
//      GETTERS
        string getName() { return name; }
        int getRoomNum() { return roomNum; }
        string getCheckIn() { return checkIn; }
        string getCheckOut() { return checkOut; }
        string getGuest() {
            string message = name + "\n"; 
            message += to_string(roomNum) + "\n";
            message += checkIn + "\n";
            message += checkOut + "\n";
            return message;
        }
//      SETTERS
        void setName(string aName) { this  -> name = aName;}
        void setRoomNum(int aRoomNum) { this -> roomNum = aRoomNum;}
        void setCheckIn(string aCheckIn) { this -> checkIn = aCheckIn;}
        void setCheckout(string aCheckOut) { this -> checkOut = aCheckOut;}

};

class Room {
    private:
        int roomID;
        bool isAvailable;
    public:
        Room(int roomID = 0, bool isAvailable = false) {
            this -> roomID = roomID;
            this -> isAvailable = isAvailable;
        }
//      GETTERS
        int getRoomID() { return roomID;}
        bool getIsAvailable() { return isAvailable;}
        string getRoom() { 
            string message = "Room ";
            message += to_string(roomID);
            message += " is ";
            message += (isAvailable ? "Vacant" : "Occupied");
            return message;
        }
//      SETTERS
        void setRoomID(int aRoomID) { this -> roomID = aRoomID;}
        void setIsAvailable(bool aIsAvailable) { this -> isAvailable = aIsAvailable;}
};

int showMenu();
void displayAllRooms(vector<Room> firstFloor);

int main() {

vector <Room> firstFloor{
    Room( 101, true),
    Room( 102, true),
    Room( 103, true),
    Room( 104, true),
    Room( 105, false)
};

vector <Guest> reservations  = {
    Guest("Nabunturan", 101, "2025-10-10", "2025-10-11")
};

int userChoice = showMenu();

do {

switch (userChoice) {
    userChoice;
    case 1:
        displayAllRooms(firstFloor);
        break;
    case 2:
        break;

int userChoice = showMenu();
};



}
while (userChoice == 6);







    return 0;
} 




// FUNCTIONSSSSS
int showMenu() {
    int choice;
    cout << "\n===== HOTEL RESERVATION MENU =====" << endl;
    cout << "1. Display all rooms" << endl;
    cout << "2. Make a reservation" << endl;
    cout << "3. View all reservations" << endl;
    cout << "4. Update reservation" << endl;
    cout << "5. Cancel reservation" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    return choice;
    
}

void displayAllRooms(vector<Room> firstFloor) {
    for (int i = 0; i < firstFloor.size(); i++) {
    cout << firstFloor[i].getRoom() << endl;
}
}




/* string name, checkIn, checkOut;
int roomNum;

cout << "Enter guest name: ";
getline(cin, name);

cout << "Enter room number: ";
cin >> roomNum;
cin.ignore();

cout << "Enter check-in date: ";
getline(cin, checkIn);

cout << "Enter check-out date: ";
getline(cin, checkOut);

Guest newGuest(name, roomNum, checkIn, checkOut);

reservations.push_back(newGuest);

cout <<reservations.back().getGuest(); */