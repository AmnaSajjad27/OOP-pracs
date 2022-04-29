# ifndef CLINIC_H
# define CLINIC_H
# include <string>
# include "Cage.h"

class Clinic{
    private:
    // counter for array of cages
    // array of cages
    Cage * clinic;
    
    public:
    Clinic();    
        int count;
        int max_size;
        std::string name;

    Clinic(int max_size, std::string name);
    
    // returns the number of cages currently in the the clinic
    int get_current_number_of_cages(); 

    std::string get_name();                // returns the clinics's name
    void set_name(std::string Name);

    Cage * get_cages();        // returns the array of cages currently in the clinic

// returns true and adds new cage to the clinic if the clinic is not full
// otherwise returns false
bool add_cage(Cage new_cage);

~Clinic(); // destructor
};
# endif

