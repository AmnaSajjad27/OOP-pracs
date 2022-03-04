# include <iostream>

using namespace std;
// function that counts the number of 2s,5s and 9s

void twofivenine(int array[], int n){

    // initalise counters for each 
    int num_twos , num_fives , num_nines; 

    num_twos = 0;
    num_fives = 0;
    num_nines = 0;

   // if(n < 1){
    //    std::cout << "1";
   // }

    // for loop to iteriate through the given array
    for (int i = 0; i < n; i++ ){
        // switch statement to check equality 
        switch(array[i]){
            case 2:
            num_twos++;
            break;
            case 5:
            num_fives++;
            break;
            case 9:
            num_nines++;
            break;
        }
    }
    std::cout << "2:"<< num_twos << ";5:" << num_fives << ";9:" << num_nines << ";" << std::endl;
}