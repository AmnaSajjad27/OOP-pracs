# include "person.h"
# include "aircraft.h"

using namespace std;

aircraft::aircraft(){};

// get and set 

void aircraft::setPilot(person thePilot){
    thePilot = thePilot;
}
person getPilot(){
    return Name;
}

void aircraft::setCoPilot(person theCoPilot){
    theCoPilot = theCoPilot;
}
person getCoPilot(){
    return Name;
}

void aircraft::printDetails(){
    cout << "the pilot\n" << Pilot.getName << "\n";
    cout << CoPilot.getCoPilot << "\n";
}