# include <iostream>

extern void hexDigits(int *numbers,int length);

int main(){
    int numbers[9] = {11,2,13,4,15,6,7,8,9};
    int length = 9;

    hexDigits(numbers,length);
}