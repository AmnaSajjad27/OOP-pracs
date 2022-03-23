# include <iostream>

extern void print_sevens(int *nums,int length);

int main(){
    // define and initialise a single-dimensional integer array.
    int nums[5] = {7,14,23,28,70};

    //pointer that points to the first element in the array and pass the pointer to a function.
    int *ptr = nums;

    int length = 5;

    print_sevens(nums,length);



}