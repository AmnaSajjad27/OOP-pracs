#include <iostream>
#include <stdlib.h>

extern int fanarray(int array[], int n);

int main(){
    int array[] = {10 ,12, 13, 14, 15, 16};
    int n = 6;
    
    std::cout << fanarray(array, n) << std::endl;
}