#include <iostream>
# include <string>

extern void copy_2d_strings(std::string first[][2], std::string second[][2], int n);

int main(){

    int n = 3;

    // define and intialise a 2d string of size 3 by 2
    std::string first[3][2] = {"n o", 
                         "y e",
                         "w h"};
    // define another string of the same size but do not initalise it 
    std::string second[3][2];

    // calling the function 
    copy_2d_strings(first,second,n);

}