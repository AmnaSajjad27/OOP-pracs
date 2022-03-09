# include <iostream>

// Function that determines the number of times 0-9 appears 
void count_numbers(int array[4][4]){

            int zero = 0;
            int one = 0;
            int two = 0;
            int three = 0;
            int four = 0;
            int five = 0;
            int six = 0;
            int seven = 0;
            int eight = 0;
            int nine = 0;

using namespace std;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (array[i][j] == 0){
                zero = zero + 1;
            }
            else if(array[i][j] == 1){
                one = one + 1;
            }
            else if(array[i][j] == 2){
                two = two + 1;
            }
            else if(array[i][j] == 3){
                three = three + 1;
            }
            else if(array[i][j] == 4){
                four = four + 1;
            }
            else if(array[i][j] == 5){
                five = five + 1;
            }
            else if(array[i][j] == 6){
                six = six + 1;
            }
            else if(array[i][j] == 7){
                seven = seven + 1;
            }
            else if(array[i][j] == 8){
                eight = eight + 1;
            }
            else if(array[i][j] == 9){
                nine = nine + 1;
            } 
        }
    }
    cout << "0:"<< zero << ";" << "1:"<< one << ";" << "2:" << two << ";" << "3:"<< three << ";" << "4:"<< four << ";" << "5:" << five << ";" << "6:" << six << ";" << "7:" << seven << ";" << "8:" << eight << ";" << "9:" << nine << ";" << endl;

}