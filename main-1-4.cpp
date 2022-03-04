#include <iostream>
#include <stdlib.h>

using namespace std;

extern int sumtwo(int array[], int secondarray[], int n);

int main(){
    int n = 5;

    // initalise arrays
    int array[] = {1, 2, 3, 4, 5};
    int secondarray[] = {1, 2, 3, 4, 5};

cout << "The sum of the two arrays is: " << sumtwo(array, secondarray, n) << std::endl;

} 