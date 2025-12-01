#ifndef AIRLINE_H
#define AIRLINE_H

#include <string>
#include <vector>
#include "Flight.h"

class Airline {
private:
    std::string name;
    std::vector<flight> flights;  

public:
    Airline();
    Airline(const std::string& airlineName);

    std::string getName() const;
    std::vector<flight>& getFlights();
    const std::vector<flight>& getFlights() const;

    void addFlight(const flight& f);
    int findFlightIndex(const std::string& flightId) const;
    flight* getFlightById(const std::string& flightId);
};

#endif
