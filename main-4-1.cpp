# include <iostream>

extern int secondSmallestSum(int *numbers,int length);

int main(){

    int numbers[4] ={1,2,3,4};

    int length = 4;

    std::cout << secondSmallestSum(numbers,length) << std::endl;

}
