#include "Flight.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

flight::flight() {
    flightid = "";
    departure = "";
    destination = "";
    rows = 0;
    seatsperrow = 0;
}

flight::flight(string id, string dep, string des, int r, int spr) {
    flightid = id;
    departure = dep;
    destination = des;
    rows = r;
    seatsperrow = spr;
}

string flight::getflightid() const {
    return flightid;
}
string flight::getdeparture() const{
    return departure;
}
string flight::getdestination() const{
    return destination;
}
int flight::getrows() const{
    return rows;
}
int flight::getseatsperrow() const{
    return seatsperrow;
}

void flight::addpassenger(const passenger& p) {
    passengers.push_back(p);
}
// Removes passenger matching the given ID
bool flight::removepassenger(int passengerid){
    for ( size_t i = 0; i < passengers.size(); i++){
        if (passengers[i].getid() == passengerid){
            passengers.erase(passengers.begin() + i);
            return true;
        }
    }
    return false;
}
// Checks if a specific seat is taken
bool flight::isseattaken(int r, char s) const{
    for(size_t i = 0; i < passengers.size(); i++){
        if (passengers[i].getrow() == r && passengers[i].getseat() == s){
            return true;
        }
    }
    return false;
}

//print seat
void flight::displayseatmap() const{
    cout<< "Seat Map for flight " << flightid << endl;
    // seat letter first
    //then row
    cout << "    ";
    for ( int i = 0; i < seatsperrow; i++){
        cout << char('A' + i) << " ";
    }

    cout << endl;

    for (int r = 0; r < rows; r++){
        cout << setw(3) << r << " ";
        for (int c = 0 ; c < seatsperrow; c++){
            char letter = char('A' + c);

            if (isseattaken(r, letter)){
                cout << "X ";
            } else {
                cout << "_ ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
//print passenger list

void flight::displaypassengerlist() const {
    cout << "Passenger List for flight " << flightid << endl;
    cout << left << setw(12) << "FirstName"
         << setw(12) << "LastName"
         << setw(16) << "Phone"
         << setw(6)  << "Seat"
         << setw(8)  << "ID"
         << "\n";

    cout << "--------------------------------------------------------------" << endl;
    
    for (size_t i = 0; i < passengers.size(); i++) {
        string seat = to_string(passengers[i].getrow()) + passengers[i].getseat();

        cout << left << setw(12) << passengers[i].getfirstname()
             << setw(12) << passengers[i].getlastname()
             << setw(15) << passengers[i].getphonenum()
             << setw(6)  << seat
             << setw(8)  << passengers[i].getid()
             << endl;
    }
    cout << endl;
}

// save passengers
void flight::savepassengerstofile(ofstream& fout) const {
    for (size_t i = 0; i < passengers.size(); i++) {
        fout << flightid << " "
             << passengers[i].getfirstname() << " "
             << passengers[i].getlastname() << " "
             << passengers[i].getphonenum() << " "
             << passengers[i].getrow() << passengers[i].getseat() << " "
             << passengers[i].getid()
             << endl;
    }
}
//return list
vector<passenger>& flight::getpassengerlist() {
    return passengers;
}
