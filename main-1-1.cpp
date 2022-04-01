# include <iostream>

extern void print_until_down(int *vals, int len);

int main(){

    int vals[10] = {1,2,3,4,5,5,4,3,2,1};
    int len = 10;

    print_until_down(vals,len);
}