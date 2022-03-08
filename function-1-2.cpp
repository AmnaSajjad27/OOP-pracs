# include <iostream>

// Function that determines if a 10x10 matrix is a identity matrix or not
int identity(int array[10][10]){
int matrix  = 1;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (array[i][i] != 1 && array[j][j] != 1 && array[i][j] != 0){
                matrix = 0;
                break;
            }
        }
    }
    return matrix;
}