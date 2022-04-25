# include <string>
# include "Musician.h"

using namespace std;

// default constructor set to null and 0
Musician::Musician(){
    instrument = "null";
    experience = 0;
}
// missing my implentation THIS ONE
Musician::Musician(std::string Instrument, int Experience)
{
    instrument = Instrument;
    Experience = experience;
}

// get and set 
void Musician :: set_instrument (string what){
    instrument = what;
}
std::string Musician :: get_instrument(){
    return instrument;
}

void Musician :: set_experience (int years){
    experience = years;
}
int Musician :: get_experience(){
    return experience; 
}

Musician::~Musician(){
}