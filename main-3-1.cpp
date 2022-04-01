# include <iostream>

extern int count_next_element_matches(int vals[], int length);

int main(){
    int vals[9] = {1,2,2,2,3,1,1,5,2};
    int length = 9;

    std::cout<< count_next_element_matches(vals,length) << std::endl;
}