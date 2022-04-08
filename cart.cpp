# include "meerkat.h"
# include "cart.h"

using namespace std;

cart::cart(){
    count = 0;
    cats = new meerkat[4];
}

bool cart::addMeerkat(meerkat cat){
    // adds meerkat to the cart, returns false if full

    // add meerkats but no more than 4
    if (count < 4){
        cats[count] = cat;
        count++;
        return true;

    }
    return false;
    }

void cart::printMeerkats(){
    for (int i = 0; i < count; i++){
    cout << cats[i].getName() << " " << cats[i].getAge() << "\n";
    }
}

void cart::emptyCart(){
    delete[] cats;
    count = 0;
    }

