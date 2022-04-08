# include "cart.h"
# include "meerkat.h"
using namespace std;

int main(){

    cart mycart;

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

    meerkat m5;
    m5.setName("idk");
    m5.setAge(22);

    for (int i =0; i<100;i++){
        meerkat m;
        m.setName("idk");
        m.setAge(22);
        if (mycart.addMeerkat(m) == false){
           cout << "didnt work" << endl;
        }
    }

    return 0;
}