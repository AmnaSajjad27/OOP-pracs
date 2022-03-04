# include <iostream>

 //Using a for loop, count the number of even numbers between 1 and a number we supply

int count_even(int number){

// initalise a counter for even numbers 
int even_counter = 0;

// for loop for numbers 1 to number suplied 
// if loop to check if the number is even 

    for (int i = 1; i <= number; i++ ){
        if (i % 2 == 0){
            even_counter++;
        }
    }
    return even_counter;;
}