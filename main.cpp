#include <iostream>
#include "book.h"

using namespace std;

int main() {
    book b = book();
    // book book_1 = book(book)
    cout << b.get_author() << endl; 
    // cout << b.author <<  b.book_name << b.number_of_copies << b.borrowed<< endl;
    b.set_author("Amn");
    cout << b.get_author() << endl;
       book c = book("Amna","ooptextbook",9,0);
    // c.borrowed = 1;
    // cout << c.author << " " << c.book_name << " " << c.number_of_copies << " " << c.borrowed<< endl;

    return 0;
}