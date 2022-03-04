# include <iostream>

// function that returns the number of elements in an array that are equal to a given parameter
int count(int array[], int n, int number){

    // nested for and if loop to check if an element of array is equal to the given parameter 

    // initalising a counter 
    int counter = 0;

    for (int i = 0; i < n; i++){
        if (array[i] == number){
            counter++;
        }
    }
    return counter;
}
