#ifndef SEAT_H
#define SEAT_H

#include <string>

class Seat {
private:
    int row_number;     // e.g., 1, 2, 3, ...
    char seat_letter;   // e.g., 'A', 'B', 'C', ...

public:
    // Constructor    
    Seat();                            // Default constructor             
    Seat(int row, char seat);         // Parameterized constructor

    // Getters
    int getRowNumber() const;
    char getSeatChar() const;

    // Setters
    void setRowNumber(int row);
    void setSeatChar(char seat);

    // Utility functions
    std::string getSeatLabel() const; // Returns seat label as "RowLetter" (e.g., "12A")
    
    // Operators
    bool operator==(const Seat& other) const;
};

#endif // SEAT_H


