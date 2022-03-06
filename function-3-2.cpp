#include <iostream>

// Function that given an array of integers and its length, return the median of the array

int median(int array[], int n){

    // sorting the array 
    for (int i = 0; i < n-1; i++){
        int minimum = i;
        for (int j = i+1; j < n; j++){
            if (array[j] < array[minimum]){
                minimum = j;
                int temporaray = array[i];
                array[i] = array[minimum];
                array[minimum] = temporaray;
            }
        }
    }

        int median_num;

    // median of the array
    // account for both even and odd number of elements in the array
    if (n % 2 == 0){
        median_num = (array[n/2] + array[n/2]-1)/2;
    }
    else {
        median_num = array[n/2];
    }

return median_num;

}