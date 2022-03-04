# include <iostream>

// function that returns the sum of all elements in an int array
int sum_array(int array[], int n){

    // creating an empty variable sum 
    int sum = 0;

    // summ all elements using a for loop
    for (int i = 0; i < n ;i++ ){
        sum += array[i];
    }
    // return 0 if the array is empty 
    if (n < 1)
    {
        return 0;
    }
    return sum;
} 