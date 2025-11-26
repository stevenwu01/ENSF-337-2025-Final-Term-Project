#ifndef Route_H
#define Route_H
#include <string>

using namespace std;

class route{
    private:
        string source; //depart
        string destination;

    public:
        route();
        route(string s,string d);
        string getsource() const;
        string getdestination()const;

        void setsource(const string&s);
        void setdestination(const string& d);
        
    };

#endif