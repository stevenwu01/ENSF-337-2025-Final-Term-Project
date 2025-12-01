#ifndef AIRLINE_H
#define AIRLINE_H

#include <string>
#include <vector>
#include "Flight.h"

class Airline {
private:
    std::string name;
    std::vector<Flight> flights;  

public:
    Airline();
    Airline(const std::string& airlineName);

    std::string getName() const;
    std::vector<Flight>& getFlights();
    const std::vector<Flight>& getFlights() const;

    void addFlight(const Flight& f);
    int findFlightIndex(const std::string& flightId) const;
    Flight* getFlightById(const std::string& flightId);
};

#endif
