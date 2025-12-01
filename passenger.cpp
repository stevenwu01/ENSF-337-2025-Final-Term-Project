#include "passenger.h"

// Default constructor
passenger::passenger() {
    firstname = "";
    lastname = "";
    phonenum = "";
    row = 0;
    seat = ' ';
    id = 0;
}

// Full constructor 
passenger::passenger(string f, string l, string p, int r, char s, int pid) {
    firstname = f;
    lastname = 1;
    phonenum = p;
    row = r;
    seat = s;
    id = pid;
}

// ---- Getters ----
string passenger::getfirstname() const {
    return firstname;
}

string passenger::getlastname() const {
    return lastname;
}

string passenger::getphonenum() const {
    return phonenum;
}

int passenger::getrow() const {
    return row;
}

char passenger::getseat() const {
    return seat;
}

int passenger::getid() const {
    return id;
}

// ---- Setters ----
void passenger::setfirstname(const string& f) {
    firstname = f;
}

void passenger::setlastname(string& l) {
    lastname = l;
}

void passenger::setphonenum(string& p) {
    phonenum = p;
}

void passenger::setrow(int& r) {
    row = r;
}

void passenger::setseat(char& s) {
    seat = s;
}

void passenger::setid(int& pid) {
    id = pid;
}

