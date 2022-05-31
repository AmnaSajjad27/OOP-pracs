#include "animal.h"
#include "hunter.h"
#include <string>

using namespace std;

// constructor 
hunter::hunter(){
    n = "null";
    v = 0;
    nextID = 1000;
    nextID++;
}

// get and set 
// kills
void hunter::set_kills(int kills){
    kills = kills;
}
int get_kills(){
    return kills;
};
// name 
std::string hunter::get_name(){
    return n;
}

