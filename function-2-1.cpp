# include <iostream>

// function that given an array of integers and its length, will find the smallest number and return it
int minimum(int array[], int n){

// initalisng variable to hold the smallest number
int min_num = array[0];

    // for loop to check the smallest number 
    for (int i = 0;i < n;i++){
        // if loop to check the smallest number 
        if (array[i]< min_num){
            min_num = array[i];
        }
    }
    return min_num;
}
