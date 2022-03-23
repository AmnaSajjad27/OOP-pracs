# include <iostream>

extern int maximum_sum(int *nums,int length);


int main(){

    int nums[10] ={ 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };

    int length = 10;

    std::cout << maximum_sum(nums,length) << std::endl;

}