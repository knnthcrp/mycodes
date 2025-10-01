#include <iostream>
#include <string>

using namespace std;

void showMenu();
void displayAllRooms(Room rooms[]);


class Guest {
    private:
        string name;
        int roomNum;
        string checkIn;
        string checkOut;
    public:
        Guest(string name, int roomNum, string checkIn, string checkOut) {
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

int main() {

Room firstFlr[5] = {
 Room( 101, true),
 Room( 102, true),
 Room( 103, true),
 Room( 104, true),
 Room( 105, false)
    };

displayAllRooms(firstFlr, 5);




    return 0;
} 

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

void displayAllRooms(Room rooms[], int size) {
    for (int i = 0; i < size; i++) {
    cout << rooms[i].getRoom() << endl;
}
}