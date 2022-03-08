# include <iostream>

// Function that returns the sum of the elements along the main diagonal 
int diagonal(int array[4][4]){

    //initalise variable sum
    double sum = 0;

    // loop for rows
    for (int i = 0; i < 4; i++){
        // loop for columns
        for (int j = 0; j < 4;j++){
            // if its a diagnoal, then add the element 
            if (i == j){
                sum = sum + array[i][j];
            }
        }
    }
    return sum;
}