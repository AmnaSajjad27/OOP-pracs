# include "person.h"
# include <iostream>

using namespace std;

int main(){
    // meerkat m1 = meerkat("Anna",8);
    person P_1 = person("Mina",18);
    return 0;


// book c = book("Amna","ooptextbook",9,0);
// cout << c.author << " " << c.book_name << " " << c.number_of_copies << " " << c.borrowed<< endl;
// b.set_author("Amn");
// cout << b.get_author() << endl;

P_1.setName("mina");
P_1.setSalary(19);

 cout << P_1.getName() << P_1.getSalary() << endl;


}