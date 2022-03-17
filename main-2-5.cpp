# include <iostream> 
#include <cmath>

using namespace std;

int main(){

    // define a 2d double array
    double array[3][5] = {
        {1,2,3,5,9},
        {1,3,4,4,1},
        {1,2,5,4,9},
    };

    //define pointer 
    double *pointer = &(array[0][0]);

    // print as in last q
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0; j < 5; j++){
            cout << (*pointer+j) << " ";
        }
        cout <<"\n";
    }
}