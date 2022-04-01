# include <iostream>
// function that returns the minimum element of the array in its first element and the maximum element of the array as its second element

int* min_max(int **vals,int num_rows, int num_cols){

    int *array;
   array = new int [2];

    for (int i = 0; i < num_rows-1; i++){
        for (int j = 0; j < num_cols-1; j++){

            if (vals[i][j] <= vals[i+1][j+1]){
                array[1] = vals[i][j];
            }
            else if(vals[i][j] >= vals[i+1][j+1]){
                array[2] = vals[i][j];
            }
        }
    }
    return array;
}