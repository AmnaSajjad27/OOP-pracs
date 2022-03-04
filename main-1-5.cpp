# include <iostream>
#include <stdlib.h>

extern int count_even(int number);

// main function 

int main(){
    // initalise variable 
    int number = 0; 
    
    // ask for user input 
    std::cout << "What number do you want to check upto: ";
    std::cin >> number;

    // output the number of even numbers
    std::cout << "The number of even numbers between 1 and the number you entered is: " << count_even( number) << std::endl;
    
    return 0;
}