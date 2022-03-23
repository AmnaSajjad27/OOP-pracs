# include <iostream>

extern void cpyda(double *old_array,double *new_array,int length);


int main(){

    double old_array[10] = {1.12,2,3,4,5,6,7,8,9,10};
    int length = 10;

    double new_array[10];

    cpyda(old_array,new_array,length);


}