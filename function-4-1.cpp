# include <iostream>

int secondSmallestSum(int *numbers,int length){
    int min_so_far;
    int min_so_far2;
    int min;
    min_so_far = min;
    min_so_far2 = min;
    int min_ending = 0;

    for (int i = 0; i < length; i++){
        min_ending = min_ending + numbers[i];

        min_so_far2 = min_ending;

        if (min_so_far >= min_ending){
            min_so_far = min_ending;

        }
        if (min_ending < 0){
            min_ending = 0;
        }
    }
/*
minSoFar    3  
second      2

temp        2

*/


    return min_so_far2;
}