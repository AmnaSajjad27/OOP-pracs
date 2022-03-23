# include <iostream> 

int maximum_sum(int *nums,int length){
    int max_so_far;
    int min;
    max_so_far = min;
    int max_ending = 0;

    for (int i = 0; i < length; i++){
        max_ending = max_ending + nums[i];
        if (max_so_far < max_ending){
            max_so_far = max_ending;
        }
        if (max_ending < 0){
            max_ending = 0;
        }
    }
    return max_so_far;
}