
//airline.cpp

#include "Airline.h"
#include <algorithm>


// Constructors

Airline::Airline() : name("Unnamed Airline") {}

Airline::Airline(const std::string& airlineName)
    : name(airlineName) {}


// Getters


std::string Airline::getName() const {
    return name;
}

const std::vector<Flight>& Airline::getFlights() const {
    return flights;
}

std::vector<Flight>& Airline::getFlights() {
    return flights;
}

// Add flight to the airline


void Airline::addFlight(const Flight& f) {
    flights.push_back(f);
}


// Find flight by ID (returns index or -1)

int Airline::findFlightIndex(const std::string& flightId) const {
    for (size_t i = 0; i < flights.size(); ++i) {
        if (flights[i].getId() == flightId) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

// Return a pointer to a flight by ID (or nullptr)

Flight* Airline::getFlightById(const std::string& flightId) {
    for (auto& f : flights) {
        if (f.getId() == flightId) {
            return &f;
        }
    }
    return nullptr;
}
