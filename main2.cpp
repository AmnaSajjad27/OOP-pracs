#include <iostream>
#include "animal.h"
#include "hunter.h"
int main(){
    hunter s("anna",78);
    std::cout << s.get_name()<< std::endl;
}