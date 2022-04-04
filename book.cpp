# include <iostream>
# include "book.h"

using namespace std;

// default constructor 
book::book(){
    book_name = "?";
    author = "NA";
    number_of_copies = 0;
    borrowed = 1;
}
    
book::book(std::string _book_name, std::string _author, int _num_cop, bool _borrowed) {
    book_name = _book_name;
    author = _author;
    number_of_copies =  _num_cop;
    borrowed = _borrowed;
}

// get and set author 
void book::set_author(std::string new_author) {
    author = new_author;
}

std::string book::get_author() {
    return author;
}


// get and set book name
void book::set_book_name(std::string new_book_name){
    book_name = new_book_name;
}

std::string book:: get_book_name() {
    return book_name;
}


// get and set number of copies 
void book::number_of_copies(int new_number_of_copies) {
    number_of_copies = new_number_of_copies;
}

int book::get_number_of_copies(){
    return number_of_copies;
}


//get and set borrowed 
void book::borrowed(bool new_borrowed) {
    borrowed = new_borrowed;
}

bool book::borrowed(){
    return borrowed;
}


    // // create a book
    // library::book_1(){
    //     book_1.book_name = "MATH TEXTBOOK";
    //     book_1.author = "iodiot";
    //     book_1.number_of_copies = 3;
    //     book_1.borrowed = 0;
    //     }

    // library::book_2(){
    //     book_1.book_name = "Science TEXTBOOK";
    //     book_1.author = "bigggiodiot";
    //     book_1.number_of_copies = 2;
    //     book_1.borrowed = 0;

    // }


    // test cout 
  //  std::cout << book_1.book_name << " has " << book_1.number_of_copies << " copies available" << std::endl;
  