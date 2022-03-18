# include <iostream>

extern bool is_a_palindrome(int integers[], int length);
extern int sum_if_a_palindrome(int integers[], int length);
extern int sum_elements(int integers[], int length);
int main(){

    int integers[] = {1,2,3,3,2,1};
    int length = 6;

    std::cout << sum_if_a_palindrome(integers, length) << std::endl;

}
