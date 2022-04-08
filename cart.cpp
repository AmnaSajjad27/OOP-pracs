# include "meerkat.h"
# include "cart.h"

using namespace std;

cart::cart(){
    count = 0;
    cats = new meerkat[5];
}
bool cart::addMeerkat(meerkat cat){
    cats[count] = cat;
    count++;
    
    if (count > 4){
        //cout << "oops cannot add meerkat";
        return false;
    }
    return true;
    }

void cart::printMeerkats(){
    for (int i = 0; i <= 3; i++){
    cout << cats[i].getName() << " " << cats[i].getAge() << "\n";
    }
}

void cart::emptyCart(){
    for (int i = 0; i < (count + 1); i++) {
    //    cats[i]-> ~meerkat();
    delete[] &(cats[i]);
    }
    count = 0;
}

