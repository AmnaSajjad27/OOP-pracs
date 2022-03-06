#include <iostream>
#include <stdlib.h>

extern double sumeven(double array[], int n);

int main(){
    double array[] = {3.5, 5, 7, 9.9, 100};
    int n = 5;

    std::cout << sumeven(array, n) << std::endl;
}