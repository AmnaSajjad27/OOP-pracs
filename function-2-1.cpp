# include <iostream>

// function that prints the elements that are exact multiples of 7

 void print_sevens(int *nums,int length){


int* ptr = nums;
// int* num = array;



     for (int i = 0; i < length; i++){
         if (nums[i] % 7 == 0 ){
             std::cout<< (nums[i]) << std::endl;
         }

     }
 }