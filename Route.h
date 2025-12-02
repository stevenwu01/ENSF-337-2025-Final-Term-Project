#ifndef Route_H
#define Route_H
#include <string>

using namespace std;

class route{
    private:
        string source; //depart
        string destination;

    public:
    // Promises to create a route with empty values.
        route();
        // Promises to create a route with the given source and destination.
        route(string s,string d);

        string getsource() const;  // Promises to return the source location.
        string getdestination()const;      // Promises to return the destination location.

        void setsource(const string&s);  // Promises to set the source location.
        void setdestination(const string& d);  // Promises to set the destination location.
        
    };

#endif
