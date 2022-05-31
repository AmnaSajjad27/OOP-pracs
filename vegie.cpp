#include "animal.h"
#include <string>

using namespace std;

// constructor 
vegie::vegie(){
    n = "null";
    v = 0;
    nextID = 100;
    nextID++;
}

// get and set 
// favourite food 
void vegie::set_favourite_food(string favourite_food){
    favourite_food = favourite_food;
}
string vegie::get_favourite_food(){
    return favourite_food;
}

// name 
std::string vegie::get_name(){
    return n;
}
