#include "animal.h"
#include "vegie.h"
#include <string>

using namespace std;

// constructor 
vegie::vegie(std::string n, int v):animal(n,v)
{
    favourite_food = "grass";
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

// vegie's version of the functions 
std::string vegie::get_name(){
    return name;
}


// initalise static member 
int vegie::nextID = 1000;
