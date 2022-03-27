# include <iostream>

extern void printNumbers(int *numbers,int length);
extern int *readNumbers();

int main(){

    int *numbers = readNumbers();

    int length = 10;
    printNumbers(readNumbers(),length);

   delete[] numbers;
   return 0;
}