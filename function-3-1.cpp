# include <iostream>

// Function that determins if its a fan array 

bool fanarray(int array[], int n){

    if (n == 1){
        return true;
    }

    // for loop to iterite the entire array
    for (int i = 0; i <= n/2 ; i++){

        //if loop to check

        if (array[i] != array[n - i - 1]){
            return false;
            }
        }
        return true;
        }