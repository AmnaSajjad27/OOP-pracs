# include "meerkat.h"
# include <iostream>
int main(){
    using namespace std;

    meerkat m1;
    m1.setName("Anna");
    m1.setAge(8);

    meerkat m2;
    m2.setName("Mina");
    m2.setAge(18);

    meerkat m3;
    m3.setName("bob");
    m3.setAge(10);

    meerkat m4;
    m4.setName("lee");
    m4.setAge(19);


   // cout << "My name is " << m1.getName() << " and i am " << m1.getAge() << " years old. " << endl;

    
    return 0;
}