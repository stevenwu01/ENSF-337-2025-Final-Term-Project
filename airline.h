#ifndef AIRLINE_H
#define AIRLINE_H

#include <string>
#include <vector>
#include "Flight.h"

class Airline {
private:
    std::string name;              // Airline name
    std::vector<Flight> flights;   // All flights owned by this airline

public:
    // ---- Constructors ----
    Airline();
    Airline(const std::string& airlineName);

    // ---- Basic Getters ----
    std::string getName() const;
    const std::vector<Flight>& getFlights() const;
    std::vector<Flight>& getFlights();   // non-const version

    // ---- Core Operations ----
    void addFlight(const Flight& f);    // from UML: +addFlight()
    int  findFlightIndex(const std::string& flightId) const;

    // Optional helper
    Flight* getFlightById(const std::string& flightId);
};

#endif
