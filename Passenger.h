#ifndef Passenger_H
#define Passenger_h
#include <string>
using namespace std;

class passenger {
private:
    string firstname;
    string lastname;
    string phonenum;
    int row;        
    char seat;      
    int id;         

public:
    passenger();
    passenger(string f, string l, string p, int r, char s, int pid);
            //first , last , phonenum , row , seat , id
    string getfirstname() const;
    string getlastname() const;
    string getphone() const;
    int getrow() const;
    char getseat() const;
    int getid() const;

    void setfirstname(const string& f);
    void setlastname(const string& l);
    void setphone(const string& p);
    void setrow(int r);
    void setseat(char s);
    void setid(int pid);
};

#endif
