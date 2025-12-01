#include "seat.h"

// Default: invalid seat
Seat::Seat() {
    row_number = 0;
    seat_letter = ' ';
}

Seat::Seat(int row, char seat) {
    row_number = row;
    seat_letter = seat;
}

int Seat::getRowNumber() const {
    return row_number;
}

char Seat::getSeatChar() const {
    return seat_letter;  
}

void Seat::setRowNumber(int row) {
    row_number = row;
}

void Seat::setSeatChar(char seat) {
    seat_letter = seat;
}

std::string Seat::getSeatLabel() const {
    return std::to_string(row_number) + seat_letter; 
}

bool Seat::operator==(const Seat& other) const {
    return (row_number == other.row_number) &&
            (seat_letter == other.seat_letter);
} 