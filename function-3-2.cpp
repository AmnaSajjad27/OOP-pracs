# include <iostream>

// function that returns the array in reverse order 
int *reverseArray(int *numbers1,int length){

int *reverse;
reverse = new int [length];

    for (int i = 0; i < length; i++){
        reverse[i] == numbers1[length];
        length = length - i;
    }
return reverse;
}