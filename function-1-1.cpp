# include <iostream> 


// function that prints all the elements of the array
void printer(int array[10][10]){
// Two loops, one for rows and one for columns
for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        std:: cout << array[i][j];
        if (j != 9){
            std::cout << " ";
        }

    }
    std::cout << "\n";
}
} 