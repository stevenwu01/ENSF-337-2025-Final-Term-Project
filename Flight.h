#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
#include <vector>
#include <fstream>
#include "Passenger.h"
using namespace std;

/*
 * Class: flight
 * Represents a single flight, holding flight details, seating
 * configuration, and a list of passengers.
 *
 * Promises to store and manage passenger information,
 * track seat availability, display seat maps and passenger lists,
 * and save passenger data to file when requested.
 */

class flight {
private:
    string flightid;                // id
    string departure;               // departure city
    string destination;             // destination city
    int rows;                       // total rows
    int seatsperrow;                // seats per row
    vector<passenger> passengers;   // vector of all passengers

public:

    // Promises to create a default empty flight.
    // Returns nothing.
    flight();

    // Promises to create a flight with the given ID, departure, destination,
    // total rows, and seats per row.
    // Returns nothing.
    flight(string id, string dep, string des, int r, int spr);


    // Promises to return the flight ID.
    string getflightid() const;

    // Promises to return the departure city.
    string getdeparture() const;

    // Promises to return the destination city.
    string getdestination() const;

    // Promises to return the total number of rows.
    int getrows() const;

    // Promises to return the number of seats per row.
    int getseatsperrow() const;


    // Promises to add a passenger to the flight.
    // Returns nothing.
    void addpassenger(const passenger& p);

    // Promises to remove the passenger with the given ID if they exist.
    // Returns true if removed, false if not found.
    bool removepassenger(int passengerid);

    // Promises to check whether the specified seat is taken.
    // Returns true if occupied, false if available.
    bool isseattaken(int row, char seat) const;


    // Promises to display the seat map.
    // Returns nothing.
    void displayseatmap() const;

    // Promises to display all passengers on the flight.
    // Returns nothing.
    void displaypassengerlist() const;


    // Promises to save all passenger information to an open file stream.
    // Returns nothing.
    void savepassengerstofile(ofstream& fout) const;

    // Promises to provide access to the passenger list.
    // Returns a reference to the vector of passengers.
    vector<passenger>& getpassengerlist();
};

#endif
