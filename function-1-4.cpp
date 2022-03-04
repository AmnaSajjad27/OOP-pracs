#include <iostream>
#include <stdlib.h>

// function that returns the sum of two arrays as an integer

int sumtwo(int array[], int secondarray[], int n){
    // creating an empty variable sum 
    int sum1 = 0;
    int sum2 = 0;
    int total_sum = 0;

    // summ all elements using a for loop
    for (int i = 0; i < n ;i++ ){
        sum1 += array[i];
    }
    for (int i = 0; i < n ;i++ ){
        sum2 += secondarray[i];
    }
    // sum all elements 
    total_sum = sum1 + sum2;

return total_sum;
}