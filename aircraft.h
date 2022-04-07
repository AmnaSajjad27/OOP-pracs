# ifndef AIRCRAFT_H
# define AIRCRAFT_H
# include "person.h"
# include <string>

class aircraft{
    private: 
    string callsign;
    person Pilot;
    person CoPilot;


// a pilot and copilot must be provided when creating an aircraft

    public:

    aircraft(string callsign,person thePilot,person theCoPilot){
    callsign = callsign;
    }
    
    void setPilot(person thePilot);      // change the pilot
    person getPilot();

    void setCoPilot(person theCoPilot);  // change the co-pilot
    person getCoPilot();

    void printDetails();                 // print the callsign, a new line, the pilot name,
                                        // a new line, the co-pilot name and a final newline.

};
# endif
