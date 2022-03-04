#include <iostream>
#include <stdlib.h>

extern bool descending(int array[], int n);

// main function 
int main(void){
      // initalise a variable to hold array size 
    int n = 0; 

    // Ask user for array size 
    std::cout << "How many numbers do you want in your array: ";
    // store the size in variable n
    std::cin >> n;

    // initalise array of size n to hold elements 
    int array[n];

    // Ask user for elements of the array
    for (int i = 0; i < n; i++) {
        // Reading User Input
      std::cout << "Enter Value for element " << i << " : ";
      std::cin >> array[i];
   }
   descending(array, n);

}