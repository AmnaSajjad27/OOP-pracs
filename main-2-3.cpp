#include <iostream>
#include <stdlib.h>

extern bool is_a_palindrome(int integers[], int length);
extern int sum_array(int integers[], int length);
extern int sum_if_a_palindrome(int integers[], int length);

int main(){
    int integers[] = {3, 6, 0, 6, 3};
    int length = 5;
    
    sum_if_a_palindrome (integers[],length)
    std::endl;
}