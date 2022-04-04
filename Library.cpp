# include <iostream>

// Defining a class that represents a libarary managemnt system 
class library{
    public:

    std::string book_name;

    std::string author;

    int number_of_copies;
    
    bool available;
    bool borrowed;

};

// main function 
int main(){

    // create a book
    library book_1;
    book_1.book_name = "whaaaaaaaaaaaaaaaaaaaat";
    book_1.author = "AmnaS";
    book_1.number_of_copies = 3000000;
    book_1.borrowed = 0;

    // test cout 
    std::cout << book_1.book_name << " has " << book_1.number_of_copies << " copies available" << std::endl;

}