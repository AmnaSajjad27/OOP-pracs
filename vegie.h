# ifndef VEGIE_H
# define VEGIE_H
# include "animal.h"
# include <string>

using namespace std;

class vegie:public animal
{
    protected:
    // create a vegie with name n and body volume v 
    // the vegie's favourite food, initalised to "grass"
    string favourite_food ;
    static int nextID;

    public:
    vegie(string n,int v);
    // get and set fav food 
    void set_favourite_food(string favourite_food);
    string get_favourite_food();

    // get name functions initlaised prefixed with "Safe:"
    string get_name() override; 

};

#endif