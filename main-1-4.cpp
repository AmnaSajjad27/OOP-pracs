#include <iostream>
#include <stdlib.h>

extern void print_scaled_matrix(int array[3][3],int scale);

int main(){
    int array[3][3] = {{1,2,3}, {1,2,2}, {1,2,3}};
    int scale = 2;

    print_scaled_matrix (array,scale);
}