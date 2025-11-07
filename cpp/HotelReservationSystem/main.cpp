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
        Guest(string name = " ", string roomNum = " ", string checkIn = " ", string checkOut = " ") {
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
            string message = "\nName: " + name + "\n"; 
            message += "Room number: " + roomNum + "\n";
            message += "Check-in date: " + checkIn + "\n";
            message += "Check-out date: " + checkOut + "\n";
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
        Room(string roomID = " ", bool isAvailable = true) {
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
void updateReservation(vector<Guest> &reservations, vector <Room> &firstFloor);
void cancelReservation(vector<Guest> &reservations, vector<Room> firstFloor);

int main() {
int choice;
string name, checkIn, checkOut, roomNum, input;
vector <Room> firstFloor{
    Room( "101", true),
    Room( "102", true),
    Room( "103", true),
    Room( "104", true),
    Room( "105", true)
};
vector <Guest> reservations  = {
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
    case 3:
        displayAllReservations(reservations);
        break;
    case 4:
        updateReservation(reservations, firstFloor);
        break;
    case 5:
        cancelReservation(reservations, firstFloor);
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
bool found = false;
cout << "Enter guest name: ";
getline(cin, name);

cout << "Enter room number: ";
getline(cin, roomNum);

    for (int i = 0; i < size(firstFloor); i--){
        if (roomNum == firstFloor[i].getRoomID()) {
        found = true;
            if (firstFloor[i].getIsAvailable()) {
                    cout << "Enter check-in date: ";
                    getline(cin, checkIn);
                    cout << "Enter check-out date: ";
                    getline(cin, checkOut);
                    cout << "\n";
                    Guest newGuest(name, roomNum, checkIn, checkOut );
                    reservations.push_back(newGuest);
                    firstFloor[i].setIsAvailable(false);
                    cout << "Room succesfully reserved! " << endl;
            }else {
            cout << "Sorry, the room is not available. Please choose another room";
            }

            break;
        }
    if(!found) {
        cout << "Please enter a valid room number.";
    }
    }
    

}
void displayAllReservations(vector<Guest> reservations) {
    cout << "\n===== LIST OF RESERVATIONS =====" << endl;
    for (int i = 0; i < reservations.size(); i++) {
    cout << reservations[i].getGuest() << endl;
    }
}
void updateReservation(vector<Guest> &reservations, vector <Room> &firstFloor) {
    string input, changed;
    int choice;
    bool found = false;
    
    cout << "\n1. Name\n2. Room Number\n3. Check-in date\n4. Check-out date\n";
    cout << "What do you want to update? "; 
    cin >> choice;
    cin.ignore(); 

    switch (choice) {


        case 1: { // name
            cout << "Please enter your current name: ";
            getline(cin, input);

            cout << "Enter your new name: ";
            getline(cin, changed);

            for (int i = 0; i < reservations.size(); i++) {
                if (input == reservations[i].getName()) {
                    reservations[i].setName(changed);
                    cout << "\nYou have successfully updated your name to " << changed << "!" << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Sorry, we can not find your reservation." << endl;
            break;
        }
        case 2: { // room#
            cout << "Please enter your current room number: ";
            getline(cin, input);

            cout << "Please enter your new room number: ";
            getline(cin, changed);

            for (int i = 0; i < reservations.size(); i++) {
                if (input == reservations[i].getRoomNum()) {
                    firstFloor[i].setIsAvailable(false);
                    reservations[i].setRoomNum(changed);
                    cout << "\nYou have successfully changed your room number to " << changed << "!" << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Sorry, we can not find your ." << endl;
            break;
        }
        case 3: { // checkin
            cout << "Please enter your name: ";
            getline(cin, input);

            cout << "Please enter your new check-in date: ";
            getline(cin, changed);

            for (int i = 0; i < reservations.size(); i++) {
                if (input == reservations[i].getName()) {
                    reservations[i].setCheckIn(changed);
                    cout << "\nYou have successfully changed your check-in date to " << changed << "!" << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Sorry, we can not find your reservation." << endl;
            break;
        }

        case 4: { // checkout
            cout << "Please enter your name: ";
            getline(cin, input);

            cout << "Please enter your new check-out date: ";
            getline(cin, changed);

            for (int i = 0; i < reservations.size(); i++) {
                if (input == reservations[i].getName()) {
                    reservations[i].setCheckout(changed);
                    cout << "\nYou have successfully changed your check-out date to " << changed << "!" << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Sorry, we can not find your reservation." << endl;
            break;
        }

        default:
            cout << "Please enter a valid choice." << endl;
    }
}
void cancelReservation(vector<Guest> &reservations, vector<Room> firstFloor) {
    string input;
    char sureness;
    bool found = false;
    cout << "Please enter your name:";
    getline(cin, input);
    for(int i = 0; i < size(reservations); i++){
        if(input == reservations[i].getName()){
            found = true;
            cout << "Do you really wish to cancel your reservation? y/n ";
            cin >> sureness;
            cin.ignore();
            if (sureness == 'y'|| sureness == 'Y') {
                for(int i = 0; i < size(reservations); i++){
                    if(input == reservations[i].getName()){
                        reservations.erase(reservations.begin() + i);
                        firstFloor[i].setIsAvailable(false);
                        cout << "You have successfully canceled your reservation!";
                        break;
                    }
                }
            }else if (sureness == 'n' || sureness == 'N') {
                cout << "Exiting cancelation...";
                break;
            }else {
                cout << "Please type 'y' for Yes or 'n' for No. ";
            }
        break;
        }
    }
    if(!found) {
        cout << "Sorry, we can not find your reservation. ";
    }
}