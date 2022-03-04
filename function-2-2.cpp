# include <iostream>

// function that returns the maximum of the given array
int maximum(int array[], int n){

    // initalisng variable to hold the biggest number 
    int max_num = array[0];

    // for loop to check the biggest number 
    for (int i = 0;i < n; i++){
        // if loop to check the biggest number 
        if (array[i] > max_num){
            max_num = array[i];
        }
    }
    return max_num;
}