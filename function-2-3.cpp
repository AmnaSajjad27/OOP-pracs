# include <iostream>

// funcitons that sums array if they are palindrome array


// function that checks if it is a palindrome array or not 
bool is_a_palindrome(int integers[], int length){

// fan array if it reads the same both ways 

bool yes_or_no = 1;

if (length < 0){
    yes_or_no == -1;
}

for (int i = 0; i < length; i++){
    if (integers[i] != integers[length-i-1]){
        yes_or_no = 0;
        std::cout << "-2"<< std::endl;
    }
}

return yes_or_no;
}




// function that sums the array of it is a palindrome array
int sum_if_a_palindrome(int integers[], int length){
    extern bool is_a_palindrome(int integers[], int length);
    double sum = 0;
    if ( (is_a_palindrome(integers,length)) == 1){

        for (int i = 0; i < length; i++){
            sum = sum + integers[i];
        }

    }
    return sum;
}

int sum_elements(int integers[], int length){
    extern bool is_a_palindrome(int integers[], int length);
    extern int sum_if_a_palindrome(int integers[], int length);

int f_sum = sum_if_a_palindrome(integers,length);


return f_sum;
}