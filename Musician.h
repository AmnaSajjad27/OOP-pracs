# include <string>
# ifndef MUSICIAN_H
# define MUSICIAN_H

// define a class Musican that stores the instrument they play and the their years of experience 
class Musician{
    private: 
        std::string instrument; 
        int experience;
    public:
        // default constructor 
        Musician();
        Musician(std::string instrument, int experience);

        // get and set instrument 
        void set_instrument(std::string what);
        std::string get_instrument();
        // get and set experience 
        int get_experience();
        void set_experience(int years);

        ~Musician();

};
# endif