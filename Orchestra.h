# ifndef ORCHESTRA_H 
# define ORCHESTRA_H
# include "Musician.h"
# include <string>

class Orchestra{
    private:
    Musician * Musicians;
    int count;

    public:
        int size;
        Orchestra();           
        Orchestra(int Size); 
        
        // returns the number of musicians who have joined the orchestra
        int get_current_number_of_members(); 

        // returns true if any musician in the orchestra plays the specified instrument
        bool has_instrument(std::string instrument); 
        
        Musician *get_members();        // returns the array of members of the orchestra

        // returns true and adds new musician to the orchestra if the orchestra is not full
        bool add_musician(Musician new_musician);

        ~Orchestra();

};
# endif
