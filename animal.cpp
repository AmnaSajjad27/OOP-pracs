#include "animal.h"
#include <string>

// default constructor 
animal::animal(){
    newName = "null";
    newVolume = "0";   
}

// other constructor 
animal::animal(std::string n, int v){
    newName = n;
    newVolume = v
}

// get and set name
void animal::set_name(std::string new_Name){
    new_Name = new_Name;
}

std::string animal::get_name(){
    return newName;
}

// get and set ID
void animal::set_animalID(int new_ID){
    new_ID = new_ID;
}
int animal::get_animalID(){
    return new_ID;
}

// get and set volume 

void animal::set_volume(int new_Volume){
    new_Volume = new_Volume;
}
int animal::get_volume(){
    return new_volume;
}

