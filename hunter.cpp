#include "animal.h"
#include "hunter.h"
#include <string>

using namespace std;

// constructor 
// IMPORTANT REVISE 
hunter::hunter(std::string n,int v):animal(n,v){
    kills = 0;
    nextID++;
}

// get and set 
// kills
void hunter::set_kills(int kills){
    kills = kills;
}
int hunter::get_kills(){
    return kills;
};
// name 
// hunters version of the functions 
std::string hunter::get_name(){
    return name;
}

// initalise static member 
int hunter::nextID = 1000;

