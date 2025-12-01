#include <iostream>
#include <vector>
#include <string>
#include "Flight.h"
#include "Passenger.h"

using namespace std;

void loadflights(vector<flight>& flights);
void loadpassengers(vector<flight>& flights);
void saveall(const vector<flight>& flights);
void showmenu();
void printwelcome();

int main(){
    printwelcome();
    showmenu();
    //print welcome 
    //wait for user
    //create menu

    
    return 0;
}


void loadflights(vector<flight>& flights){
    

}
void loadpassengers(vector<flight>& flights){

}
void saveall(const vector<flight>& flights){
    ofstream fout ("passengers.txt");

    if (!fout) {
        cout<< "Error: could not open passenger.txt for writing.\n";
        return;
    }
    for (const flights& f : flights){
        f.savepassengersto file (fout);
    }
    fout.close();
}
void showmenu(){
    //1 show all flight and let user choose
    //2 set map
    //3 passenger list
    //4 add passenger
    //5 remove passenger
    //6 save to file
    //print exit massage
    cout << "\nPlease select one the following options:\n\n";
    cout << "  1. Select a flight\n";
    cout << "  2. Display Flight Seat Map.\n";
    cout << "  3. Display Passengers Information.\n";
    cout << "  4. Add a New Passenger.\n";
    cout << "  5. Remove an Existing Passenger\n";
    cout << "  6. Save data\n";
    cout << "  7. Quit.\n\n";
    cout << "Enter your choice: (1, 2, 3, 4, 5, 6, or 7) ";

}
void printwelcome(){
    cout << "Version: 1.0"<<endl;
    cout << "Term Project - Flight Management Program in C++"<<endl;
    cout << "Produced by: Student Name"<<endl;
    cout << "Year: 2023"<<endl;
}
