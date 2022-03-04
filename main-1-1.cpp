#include <iostream>
#include <stdlib.h>

// implent the funcution 
extern int sum_array(int array[], int n);

// main function 
int main(){

    // declare variable to store the size of the array
    int n = 0;

    // Ask user for array size 
    std::cout << "How many numbers do you want to sum: ";
    // store the size in variable n
    std::cin >> n;

    // declare array of size n
    int array[n];

    // Ask user for elements of the array
    for (int i = 0; i < n; i++) {
        // Reading User Input
      std::cout << "Enter Value for element " << i << " : ";
      std::cin >> array[i];
   }
   // print the sum 
   std::cout << "The sum of the numbers in your array is: " << sum_array(array,n) << std:: endl;

   return 0;
}  