#include <iostream>
#include <stdlib.h>

extern int identity(int array[10][10]);

int main(){

    using namespace std;

    int array[10][10] =  {{1,0,0,8,0,0,0,0,0,0} , {0,1,0,0,0,0,0,0,0,0} , {0,0,1,0,0,0,0,0,0,0}, {0,0,0,1,0,0,0,0,0,0}, {0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,1,0,0,0,0}, {0,0,0,0,0,0,1,0,0,0}, {0,0,0,0,0,0,0,1,0,0}, {0,0,0,0,0,0,0,0,1,0}, {0,0,0,0,0,0,0,0,0,1} };

    cout << identity(array) << endl;
}