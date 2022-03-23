# include <iostream>

extern void print_sevens(int *nums,int length);

int main(){
    // define and initialise a single-dimensional integer array.
    int array[5] = {7,14,23,28,70};

    //pointer that points to the first element in the array and pass the pointer to a function.
    int *ptr = array;

    int length = 5;

    print_sevens(ptr,length);



}