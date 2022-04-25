# include "person.h"
# include "aircraft.h"

using namespace std;

aircraft::aircraft(){
    Pilot = 
};

// get and set 

void aircraft::setPilot(person thePilot){
    Pilot = thePilot;
}
person getPilot(){
    return Pilot;
}

void aircraft::setCoPilot(person theCoPilot){
    CoPilot = theCoPilot;
}
person getCoPilot(){
    return CoPilot;
}

void aircraft::printDetails(){
    cout << "the pilot\n" << Pilot.getName() << "\n";
    cout << CoPilot.getName() << "\n";
}