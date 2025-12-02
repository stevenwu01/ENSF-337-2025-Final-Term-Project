#include <iostream>
#include <vector>
#include <string>
#include <fstream>
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
    loadflights(flights); 
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
            if(selected == -1){
                cout << "No flight selected. Please select a flight first." << endl;
            }
            else{
                flights[selected].displayseatmap();
            }
            pressEntertoContinue();
        }
        else if (choice == 3){
            //display passenger info
            if (selected == -1){
                cout << "No flight selected. Please select a flight first." << endl;
            }
            else{
                flights[selected].displaypassengerlist();
            }
            pressEntertoContinue();
        }
        else if (choice == 4){
            //add passenger
            if (selected == -1){
                cout << "No flight selected. Please select a flight first." << endl;
                pressEntertoContinue();
                continue;
            }
            
            int pid,row;
            char seat;
            string fname,lname,phonenum;
            
            cout << "Enter passenger ID: ";
            cin >> pid;

            cout << "Enter first name: ";
            cin >> fname;

            cout << "Enter last name: ";
            cin >> lname;

            cout << "Enter phone number: ";
            cin >> phonenum;

            cout << "Enter the passenger's desired row: ";
            cin >> row;

            cout << "Enter the passenger's desired seat: ";
            cin >> seat;
            
            if (flights[selected].isseattaken(row, seat)){
                cout << "Seat " << row << seat << " is already taken. Cannot add passenger." << endl;
            } 
            else {
                passenger p(fname, lname, phonenum, row, seat, pid);
                flights[selected].addpassenger(p);

                cout << "Passenger " << fname << " " << lname 
                    << " was successfully added to flight " 
                    << flights[selected].getflightid() << endl;
                }
                pressEntertoContinue();   
        }
        else if (choice == 5){
            //remove passenger
            if (selected == -1){
                cout << "No flight selected. Please select a flight first." << endl;
                pressEntertoContinue();
                continue;
            }
            int pid;
            cout<< "Enter passenger ID to remove: ";
            cin >> pid;

            bool remove = flights[selected].removepassenger(pid);
            if (remove){
                cout << "Passenger with ID " << pid << " was successfully removed from flight " << flights[selected].getflightid() << endl;
            } else {
                cout << "Passenger with ID " << pid << " not found "<< endl;
            }
            pressEntertoContinue();
        
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
    ifstream fin("flights.txt");
    if(!fin){
    cout << "Error: could not open file.txt\n";
        return;
    }
    string id, dep, des;
    int rows, spr;

    while (fin >> id >> dep >> des >> rows >> spr){
        flight f(id, dep, des, rows, spr);
        flights.push_back(f);
    }
    fin.close();
    
}
void loadpassengers(vector<flight>& flights){

}
void saveall(const vector<flight>& flights){
    ofstream fout ("passengers.txt");

    if (!fout) {
        cout<< "Error: could not open passenger.txt for writing.\n";
        return;
    }
    for (const flight& f : flights){
        f.savepassengerstofile(fout);
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

void pressEntertoContinue(){
    cout << "\n<<< Press ENTER to Continue >>>>\n";
    cin.ignore();
    cin.get();
}