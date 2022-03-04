# include <iostream>

// Function that given an array of integers and its length, will determine if the elements are in ascending order or not

bool ascending(int array[], int n){

    if (n == 1){
        return true;
    }


    // for loop to iterite the entire array
    for (int i = 0; i < n-1 ; i++){

        //if loop to check

        if (array[i] > array[i+1]){
            return false;
        }
        }
        return true;
        }