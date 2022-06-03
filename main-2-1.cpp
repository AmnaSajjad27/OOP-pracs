# include <iostream>
# include "Document.h"
# include "Contract.h"

int main(){
    Contract a(38);

   std::cout << a.get_numPages() << std::endl;
}