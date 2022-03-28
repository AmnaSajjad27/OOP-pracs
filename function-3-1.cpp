# include <iostream> 

// read a set of 10 numbers and dynamically allocate an array of int of length 10
int *readNumbers(){

    int *numbers;
    numbers = new int [5];

    std::cout << "Enter 5 integers: "<< std::endl;

    for (int i=0; i<5; i++){
            std::cin >> numbers[i];
    }
    return numbers;
}

// fucnction to chekc if two arrays are the same 


bool equalsArray(int *numbers1,int *numbers2,int length){
    
for (int i=0; i<length; i++){
        if (numbers1[i] != numbers2[i])
        return false;
    }
        return true;
}

/* prints all the numbers in the array 
void printNumbers(int *numbers,int length){

    for (int i=0; i<length; i++){
        std::cout << i << " ";
        std::cout << numbers[i] << std::endl;
    }

}
*/
