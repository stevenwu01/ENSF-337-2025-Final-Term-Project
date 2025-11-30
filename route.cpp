#include "Route.h"

// Default constructor
route::route() {
    source = "";
    destination = "";    
}

// Full constructor
route::route(string s, string d) {
    source = s;
    destination = d;
}

// ---- GETTERS ----
string route::getsource() const {
    return source;
}

string route::getdestination() const {
    return destination;
}

// ---- SETTERS ----
void route::setsource(const string& s) {
    source = s;
}

void route::setdestination(const string& d) {
    destination = d;
}