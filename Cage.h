# ifndef CAGE_H
# define CAGE_H
# include <string>

// class cage 
class Cage{
    std::string newName;
    int newNumber;

    public:
    // default constructor 
    Cage();
    // a constructor that takes the ID number and occupant name
    Cage(int newNumber, std::string newName);
    
    std::string get_name(); // returns the name of the cage occupant
    void set_name(std::string newName);

    int get_ID_number();  // returns the cage's ID number
    void set_ID_number(int newNumner);
    
    ~Cage(){}; //destructor    

};
# endif