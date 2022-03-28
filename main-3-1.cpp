# include <iostream>

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern void printNumbers(int *numbers,int length);

int main(){
    // call readNumbers twice for two arrays

    int numbers1[5] = {1,2,3,4,5};
    int numbers2[5] = {1,2,3,4,5};
    int length = 5;
   
   std::cout<< equalsArray(numbers1,numbers2,length);

 //delete[] numbers1;
 //delete[] numbers2;

return 0;

}