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
    // Default constructor

    passenger();
    // Constructor with all passenger info
    passenger(string f, string l, string p, int r, char s, int pid);
    // return the passenger's first , last , phonenum , row , seat , id
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
