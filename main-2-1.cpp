#include <iostream>
#include <stdlib.h>

extern void print_as_binary(std::string decimal_number);

int main(){
    std::string decimal_number;
    decimal_number = 73;
    print_as_binary(decimal_number);
}