#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
#include <vector>
#include <fstream>
#include "Passenger.h"
using namespace std;


class flight {
private:
    string flightid;                // id
    string departure;               // departure city
    string destination;             // destination city
    int rows;                       // total rows
    int seatsperrow;                // seats per row
    vector<passenger> passengers;   // vector of all passengers

public:

   
    flight();

    flight(string id, string dep, string des, int r, int spr);


    string getflightid() const;


    string getdeparture() const;


    string getdestination() const;


    int getrows() const;

    int getseatsperrow() const;


    void addpassenger(const passenger& p);

    bool removepassenger(int passengerid);

    bool isseattaken(int row, char seat) const;


    void displayseatmap() const;

    void displaypassengerlist() const;

    void savepassengerstofile(ofstream& fout) const;


    vector<passenger>& getpassengerlist();
};

#endif
