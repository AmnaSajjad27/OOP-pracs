# include <iostream>

// function that prints the elements that are exact multiples of 7

 void print_sevens(int *nums,int length){


int array[5] = {7,14,23,28,-70};
int* ptr = array;
int* num = array;



     for (int i = 0; i < length; i++){
         if (num[i] % 7 == 0 ){
             std::cout<< (num[i]) << std::endl;
         }

     }
 }