# include <iostream>

// Function that prints the corrosponding hex digits 
void hexDigits(int *numbers,int length){

    for (int i = 0; i < length; i++){

        switch(numbers[i]){
             case 0 :
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "0" << std::endl;
        break;
         
        case 1:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "1" << std::endl;
        break;
        
        case 2:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "2" << std::endl;
        break;
        
        case 3:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "3" << std::endl;
        break;

        case 4:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "4" << std::endl;
        break;

        case 5:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "5" << std::endl;
        break;

        case 6:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "6" << std::endl;
        break;

        case 7:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "7" << std::endl;
        break;

        case 8:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "8" << std::endl;
        break;

        case 9:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "9" << std::endl;
        break;

        case 10:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "10" << std::endl;
        break;

        case 11:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "A" << std::endl;
        break;

        case 12:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "B" << std::endl;
        break;

        case 13:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "C" << std::endl;
        break;

        case 14:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "D" << std::endl;
        break;

        case 15:
        std::cout << i << " ";
        std::cout << numbers[i] << " ";
        std::cout << "E" << std::endl;
        break;
        }
    }

}