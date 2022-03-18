# include <iostream> 
# include <cmath>

// function that takes a binary number and returns its integer value

int binary_to_number(int binary_digits[], int number_of_digits){

int decimal = 0;

    for (int i = 0; i < number_of_digits; i++){
        if (binary_digits[i] % 10 == 1){
            decimal = decimal + pow(2,i);
        }
}
return decimal;
}