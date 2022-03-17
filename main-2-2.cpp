# include <iostream> 

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[] = {1,0,0,1,0,0};
    int numbeber_of_digits = 6;
    
    std::cout << binary_to_number(binary_digits,numbeber_of_digits) << std::endl;
}