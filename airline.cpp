#include "Airline.h"

Airline::Airline() : name("Unnamed Airline") {}

Airline::Airline(const std::string& airlineName)
    : name(airlineName) {}

std::string Airline::getName() const {
    return name;
}

std::vector<flight>& Airline::getFlights() {
    return flights;
}

const std::vector<flight>& Airline::getFlights() const {
    return flights;
}

void Airline::addFlight(const flight& f) {
    flights.push_back(f);
}

int Airline::findFlightIndex(const std::string& flightId) const {
    for (size_t i = 0; i < flights.size(); ++i) {
        if (flights[i].getflightid() == flightId) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

flight* Airline::getFlightById(const std::string& flightId) {
    for (auto& f : flights) {
        if (f.getflightid() == flightId) {
            return &f;
        }
    }
    return nullptr;
}
