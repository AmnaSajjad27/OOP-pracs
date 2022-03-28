# include <iostream> 

// read a set of 10 numbers and dynamically allocate an array of int of length 10
int *readNumbers(){

    int *numbers;
    numbers = new int [10];

    std::cout << "Enter 10 integers: "<< std::endl;

    for (int i=0; i<10; i++){
            std::cin >> numbers[i];
    }
    return numbers;
}

// prints all the numbers in the array 
void printNumbers(int *numbers,int length){

    extern int *readNumbers();
if (length > 0){
    for (int i=0; i<length; i++){
        std::cout << i << " ";
        std::cout << numbers[i] << std::endl;
    }
}

}