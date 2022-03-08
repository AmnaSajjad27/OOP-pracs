#include <iostream>
#include <stdlib.h>

extern void count_numbers(int array[4][4]);

int main(){
    int array[4][4] = {{2,3,4,9} , {2,8,4,7} , {2,6,4,5} , {1,3,4,5} };
    
    count_numbers(array);
}