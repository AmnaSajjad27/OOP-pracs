# include "Orchestra.h"
# include "Musician.h"

using namespace std;

Orchestra::Orchestra(){
    count = 0;
}

Orchestra::Orchestra(int Size){
    Size = size;
    Musicians = new Musician[size];
}

bool Orchestra::add_musician(Musician new_musician){
    if (size < count){
        Musicians[count] = new_musician;
        count++;
        return true;
    }
    return false;
}

 bool Orchestra::has_instrument(std::string instrument){
     // if a musician plays a specfic instrument, return true.
    for (int i = 0; i < count; i++){
     if (Musicians[i].get_instrument() == instrument){
         return true;
     }
    }

     return false;
 }

 int Orchestra::get_current_number_of_members(){
    return count+1;
 }

 Orchestra::~Orchestra(){
}
