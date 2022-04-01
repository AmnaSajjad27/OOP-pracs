# include <iostream>

// Function that returns the number of times enighbouting elements match 

int count_next_element_matches(int vals[], int length){

int count = 0;

    for (int i = 0; i < length ; i++){
        if (vals[i] == vals[i+1]){
            count = count + 1;
        }
    }
    return count;
}