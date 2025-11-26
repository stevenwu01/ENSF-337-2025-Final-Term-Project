#include "seat.h"

// Default: invalid seat
Seat::Seat() {
    row_number = 0;
    seat_character = ' ';
}

Seat::Seat(int row, char seat) {
    row_number = row;
    seat_character = seat;
}

int Seat::getRow() const {
    return row_number;
}

char Seat::getSeatChar() const {
    return seat_character;  
}

void Seat::setRow(int row) {
    row_number = row;
}

void Seat::setSeatChar(char seat) {
    seat_character = seat;
}

std::string Seat::getSeatLabel() const {
    return std::to_string(row_number) + seat_character; 
}

bool Seat::operator==(const Seat& other) const {
    return (row_number == other.row_number) &&
            (seat_character == other.seat_character);
} 