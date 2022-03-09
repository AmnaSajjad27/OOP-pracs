# include <iostream>
# include <stdlib.h>
# include <cmath>

// function that converts from binary given as a array to decimal  

int binary_to_number(int binary_digits[], int number_of_digits){

     int decimal = 0;

    for (int index = 0; index < number_of_digits; index++ ){
        if ((binary_digits[index] % 10) == 1){
            decimal = decimal + pow(2,index);
        }
        binary_digits[index] /= 10;
    }
 return decimal;
}