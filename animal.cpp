#include "animal.h"
#include <string>

// other constructor 
animal::animal(std::string n, int v){
    name = n;
    volume = v;
    animalID = 0;
}

// get and set name
void animal::set_name(std::string new_Name){
    new_Name = new_Name;
}
/*
dont need this because inherined classes must implent it 
std::string animal::get_name(){
    return name;
}
*/ 

// get and set ID
int animal::get_animalID(){
    return animalID;
}

// get and set volume 

void animal::set_volume(int v){
    v = volume;
}
int animal::get_volume(){
    return volume;
}

