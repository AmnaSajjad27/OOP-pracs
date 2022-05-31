#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class animal
{
    protected:
    // Animal's name
    std::string name;
    // Animals are allocated a unique id on creation 
    int animalID;
    // the volume of the animal's body 
    int volume;

    public:
    // creates an animal with name n and body volume v
    animal(std::string n, int v) ;  

    // set the name and volumne of the animal 
    void set_name(std::string newName);
    void set_volume(int newVolume);

    // get the animal’s name, animalID and volume
    // Declare the get_name function as pure virtual
    virtual std::string get_name() = 0;
    int get_volume();
    int get_animalID();

    //destructor 
    ~animal(){};
    
};

#endif