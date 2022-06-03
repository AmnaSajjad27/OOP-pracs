# include "PDF.h"
# include "Document.h"
# include <iostream>

int main(){
    PDF a(4);
    std::cout << a.get_version();
}