# include "Cage.h"
# include <string>

// default constructor 
Cage::Cage(){
    newName = "";
    newNumber = 0;
}

// other constructor 
Cage::Cage(int new_number, std::string new_name){
    newNumber = new_number;
    newName = new_name;
}

// get and set 
void Cage::set_name(std::string newName){
    newName = newName;
}
std::string Cage::get_name(){
    return newName;
}

void Cage::set_ID_number(int newNumber){
    newNumber = newNumber;
}
int Cage::get_ID_number(){
    return newNumber;
}

