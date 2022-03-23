#include <iostream>

// function that copies the values of the first array into the second, without using pointers
void copy_2d_strings(std::string first[][2], std::string second[][2], int n){

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            first[i][j] = second[i][j];
        }
    }
    
    
    // std::cout << first << std::endl;

}