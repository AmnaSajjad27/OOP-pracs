# include <string>
# include "meerkat.h"

using namespace std;

        // Default constructor 
         meerkat::meerkat(){
            name = "NA";
            age = 0;
        }
    

        meerkat::meerkat(string _name, int _age){
           name = _name;
           age = _age;
        }

        // setter name
        void set_name(string meer_name){
            meer_name = meer_name;
        }
        // getter name
        std::string get_name();
        
        //setter age
        void set_Age(int meer_Age){
            meer_Age = meer_Age;
        }
        //getter age
        int get_Age();
    