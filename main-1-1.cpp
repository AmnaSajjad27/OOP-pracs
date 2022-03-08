#include <iostream>
#include <stdlib.h>

extern int diagonal(int array[4][4]);

int main(){

    using namespace std;

    int array[4][4] = {{2,3,4,5} , {2,3,4,5} , {2,3,4,5} , {2,3,4,5} };

    cout << diagonal(array) << endl;
}