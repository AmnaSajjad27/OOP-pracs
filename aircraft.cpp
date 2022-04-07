# include "person.h"
# include "aircraft.h"

using namespace std;

aircraft::aircraft(){};

// get and set 

void aircraft::setPilot(person thePilot){
    name = thePilot;
}

person getPilot(){
    return name;
}

void aircraft::setCoPilot(person theCoPilot){
    name = theCoPilot;
}
person getCoPilot(){
    return name;
}

void aircraft::printDetails(){
    cout << "the pilot\n" << Pilot.getpilot << "\n";
    cout << CoPilot.getCoPilot << "\n";
}