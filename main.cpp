#include <iostream>
#include <vector>
#include <string>
#include "Flight.h"
#include "Passenger.h"

using namespace std;

void showmenu();
void printwelcome();
void pressEntertoContinue();

void loadflights(vector<flight>& flights);
void loadpassengers(vector<flight>& flights);
void saveall(const vector<flight>& flights);

int main(){
    printwelcome();
    pressEntertoContinue();

    vector<flight> flights;
    loadpassengers(flights);

    int choice = 0,selected = -1;

    while (choice != 7){
        showmenu();
        cin >> choice;
        
        if (choice == 1){
            //select flight
            cout <<endl<<"Here is the list of available flight:"<<endl;

            for(int i = 0; i < flights.size();i++){
                cout << i << "." << flights[i].getflightid() << "  " << flights[i].getdeparture() << " to " << flights[i].getdestination() <<endl;
            }

            cout << "Enter your choice:";
            cin >> selected;

            if(selected < 0 || selected >= flights.size()){
                cout << "Invalid choice." << endl;
                selected = -1;
            }
            else{
                cout << "You have selected flight " << flights[selected].getflightid() << " from " << flights[selected].getdeparture() << " to " << flights[selected].getdestination() << "." << endl;
            }
            pressEntertoContinue();
        }
        else if (choice == 2){
            //display seat map
        }
        else if (choice == 3){
            //display passenger info
        }
        else if (choice == 4){
            //add passenger
        }
        else if (choice == 5){
            //remove passenger
        }
        else if (choice == 6){
            saveall(flights);
            pressEntertoContinue();
        }
    }

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

void pressEntertoContinue(){
    cout << "-------Press ENTER to continue-------";
    cin.ignore();
}