# include <iostream>

// function that converts from positive decimal to binary 

void print_as_binary(std::string decimal_number){

     std::string binary{};

    int  number = stoi(decimal_number);
    while( number > 0 ) {
        if( number % 2 == 0 ) {
            binary.insert (binary.begin( ), '0' );
            }
        else{
            binary.insert (binary.begin( ), '1' );
        }
        
        number >>= 1;
    }
    std::cout << binary << std::endl;
}