#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"
#include <string>

class hunter:public animal
{
    protected:
    // creating a hunter with name n and body volume v
    // how many kilss have been recorded, initalised to zero
    int kills;
    // private static attribute 
    static int nextID;

    public: 
    hunter(std::string n, int v);
    // get and set kills
    void set_kills(int kills);
    int get_kills();

    // get name 
    // override 
    std::string get_name() override;
};


#endif
