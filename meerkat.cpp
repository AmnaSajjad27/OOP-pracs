# include <string>
# include "meerkat.h"


        meerkat::meerkat(){
            name = " ";
            age = 0;
        }

        // default constructor 
        meerkat::meerkat(std::string _name, int _age){
            name = _name;
            age = _age;
        }

        // setter name
        void set_Name(std::string meer_Name){
            name = meer_Name;
        }
        // getter name
        std::string get_Name(){
            return name;
        }
        
        //setter age
        void set_Age(int meer_Age){
            age = meer_Age;
        }
        //getter age
        int get_Age(){
            return age;
        }
    