# include <string>
# include "meerkat.h"

using namespace std;
// Default constructor 
meerkat::meerkat(){
    name = "NA";
    age = 1;
    }

// get and set 
void meerkat:: setName(string meerName){
    name = meerName;
    }
string meerkat:: getName(){
    return name;
    }
void meerkat:: setAge(int meerAge){
    age = meerAge;
    }
int meerkat:: getAge(){
    return age;
    }
    