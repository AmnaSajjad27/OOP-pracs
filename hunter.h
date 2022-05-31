#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"
#include <string>

class hunter
{
    protected:
    // creating a hunter with name n and body volume v
    hunter::hunter(std::string n, int v);
    // how many kilss have been recorded, initalised to zero
    int kills;
    // private static attribute 
    static int nextID;

    public: 
    // get and set kills
    void set_kills(int kills){};
    int get_kills(){};

    // get name 
    std::string get_name(){};
};

// initalise static member 
int hunter::nextID = 0;

#endif
