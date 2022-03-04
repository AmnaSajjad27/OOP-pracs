#include <iostream>
#include <stdlib.h>

extern int minimum(int array[], int n);

// main function 
int main(){
    // initalise variable to hold array size 
      int n;

        // Ask user for array size 
    std::cout << "How many numbers do you want in your array: ";

    // store the size in variable n
    std::cin >> n;

    // initialise array of size n
    int array[n];

    // Ask user for elements of the array
    for (int i = 0; i < n; i++) {
        // Reading User Input
      std::cout << "Enter Value for element " << i << " : ";
      std::cin >> array[i];
   }
   // print the sum 
      std::cout << "The smallest number in your array is: " << minimum(array,n) << std:: endl;
}