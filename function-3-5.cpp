#include <iostream>

// Function that returns the sum of the elements in the even positions in an array
double sumeven(double array[], int n){
    double sum = 0.0;
    for (int i = 0; i < n; i+=2 ){
        sum = sum + array[i];
    }
    return sum;
}