# include <iostream>

// function that copies the values of the first array into the second, this time using pointers.

void cpyia(int old_array[],int new_array[],int length){

    // Declare a “pointer to array of integer”
    // define 2 pointers to point to the 2 arrays
    // Assign your array to that
    int *ptr_1 = old_array;
    int *ptr_2 = new_array;

    // Write a loop. Use for(). Use the pointer to access each of the integers in the array
    // for loop to copy elemnts over
    for (int i = 0; i < length; i++){
        ptr_2[i] = ptr_1[i];

        // std::cout << ptr_2[i];
    }

}