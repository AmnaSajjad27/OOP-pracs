#include <iostream>

// function that returns the average of all elements in an integer array
double average(int array[], int n){
 
// find sum of the array elements using a for loop

    // creating an empty variable sum 
    double sum = 0.0;

    // convert all elements in the array to double from int
        // initalise new array to hold all double elements 
        double array_d[n];

    for (int i = 0; i < n; i++){
        array_d[i] = array[i];
    }

    // 
    double n_d;
    n_d = n;

    // summ all elements using a for loop
    for (int i = 0; i < n ;i++ ){
        sum = sum + array_d[i];
    } 
// find the average 
double average_num;
 average_num = sum / n;

if (n < 1){
    average_num = 0.0;
}
return average_num;
}