# include <iostream>
#include <stdlib.h>

extern int count(int array[], int n, int number);

// main function

int main(){

    // Ask user for array size 

    int n = 0 ;

    std::cout << "How many numbers do you want to check: ";
    // store the size in variable n
    std::cin >> n;
    
    int array[n];

    // Ask user for elements of the array
    for (int i = 0; i < n; i++) {
        // Reading User Input
      std::cout << "Enter Value for element " << i << " : ";
      std::cin >> array[i];
   }

   // Ask user what number they want to check the array against 
   int number = 0;
   std::cout << "What number would you like to check your array for: ";
   std::cin >> number;

   // print
   std::cout << "The number of elements same as the given parameter are: " << count(array, n, number) << std:: endl;

}