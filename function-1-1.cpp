# include <iostream> 

// Function that prints elements in the array untill the next element is smaller than the one before

void print_until_down(int *vals, int len){
    // should always print the first element 
    std::cout << vals[0] << " ";

    for (int i = 0; i < len-1 ; i++){

        if (vals[i+1] > vals[i]){
            std::cout << vals[i+1] << " ";
        }
    }
}