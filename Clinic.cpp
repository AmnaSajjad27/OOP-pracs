# include "Clinic.h"
# include "Cage.h"

// default constructor 
Clinic::Clinic(){
    count = 0;
    max_size = 0;
    name = "";
}

// other constructor
Clinic::Clinic(int max_size, std::string name){
    clinic = new Cage[max_size];
    count = 0;
} 
// functions 
// returns the number of cages currently in the the clinic
int Clinic::get_current_number_of_cages(){
    return count;
}

// returns true and adds new cage to the clinic if the clinic is not full otherwise returns false
bool Clinic::add_cage(Cage new_cage){
    if (count < max_size){
        clinic[count] = new_cage;
        count ++;
        return true;
    }
    return false;
}

// returns the array of cages currently in the clinic
Cage * Clinic::get_cages(){
    return & (clinic[max_size]);
}

// get and set clinic name 
void Clinic::set_name(std::string name){
    name = name;
}
std::string Clinic::get_name(){
    return name;
}