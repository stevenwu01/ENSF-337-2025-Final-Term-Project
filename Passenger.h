#ifndef Passenger_H
#define Passenger_H
#include <string>
using namespace std;

class passenger {
private:
    string firstname;    // passenger first name
    string lastname;     // passenger last name
    string phonenum;     // passenger phone number
    int row;             // seat row
    char seat;           // seat letter
    int id;             // unique passenger ID

public:
    // Promises to create a passenger with default empty values.
    // Returns nothing.

    passenger();
    // Promises to create a passenger with the given first name, last name,
    // phone number, seat row, seat letter, and id.
    // Returns nothing.

    passenger(string f, string l, string p, int r, char s, int pid);
    //Promises to return the passenger's first , last , phonenum , row , seat , id
    string getfirstname() const;
    string getlastname() const;
    string getphonenum() const;
    int getrow() const;
    char getseat() const;
    int getid() const;

    void setfirstname(const string& f);
    void setlastname(const string& l);
    void setphonenum(const string& p);
    void setrow(int r);
    void setseat(char s);
    void setid(int pid);
};

#endif
