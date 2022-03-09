# include <iostream>

// Function that sums the elements in the array if the array is an palindrome array

// function to determine if it is a palindrome array or not 
bool is_a_palindrome(int integers[], int length){
    if (length == 1){
        return true;
    }

    // for loop to iteriate the entire array 
    for (int i = 0; i <= length/2; i++){
        if (integers[i] != integers[length - i - 1]){
            return false;
        }
    }
    return true;
}

// function that sums the elements of an array 
int sum_array(int integers[], int length){

    // creating an empty variable sum 
    int sum = 0;

    // summ all elements using a for loop
    for (int i = 0; i < length ;i++ ){
        sum += integers[i];
    }
    // return 0 if the array is empty 
    if (length < 1)
    {
        return 0;
    }
    return sum;
} 

 // function to add the elements if the array is palindrome 
int sum_if_a_palindrome(int integers[], int length){

    extern bool is_a_palindrome(int integers[], int length);
    extern int sum_array(int integers[], int length);

    //if the is_a_palindrome function returns true i.e. 1, only then use the second function to add all the elements 

char array_or_not = 0;
array_or_not = is_a_palindrome( integers, length);

    if ( array_or_not == 1){
        
       std::cout << sum_array(integers,length);
    }
    else {
        
        return -2;

    }
}