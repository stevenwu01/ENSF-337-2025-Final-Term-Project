#ifndef Flight_H
#define Flight_H

#include <string>
#include <vector>
#include "Passenger.h"
using namespace std;

class flight {
private:
    string flightid;        // id
    string departure;       // departure city
    string destination;     // destination city
    int rows;               // total rows
    int seatsperrow;        // seats per row
    vector<passenger> passengers; // vector of all passengers

public:
    flight();
    flight(string id, string dep, string des, int r, int spr);

    // read flight info
    string getflightid() const;
    string getdeparture() const;
    string getdestination() const;
    int getrows() const;
    int getseatsperrow() const;

    // add, remove, and check seat
    void addpassenger(const passenger& p);
    bool removepassenger(int passengerid);
    bool isseattaken(int row, char seat) const;

    // display 
    void displayseatmap() const;
    void displaypassengerlist() const;

    // save file
    void savepassengerstofile(ofstream& fout) const;

    // get list (for loading)
    vector<passenger>& getpassengerlist();
};

#endif
