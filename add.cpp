#include <iostream>

int main(){
// declare variables 
    int num1=0,num2=0,num3=0;
// Ask user for input
    std::cout << "Enter the first number:\n ";
    std::cin << num1;
// Ask user for input 
    std::cout <<"Enter the second number:\n ";
    std::cin << num2;
// Add the two numbers 
    num3=num1+num2;
// Display the sum of the two numbers 
    std::cout << "The sum of the two numbers is: " << num3 << std::endl;

    return 0
}