# include "meerkat.h"
# include "cart.h"

using namespace std;

cart::cart(){
    count = 0;
    cats = new meerkat[4];
}
bool cart::addMeerkat(meerkat cat){
    cats[count] = cat;
    count++;
    
    if (count > 3){
        return false;
        cout << "oops cannot add meerkat";
    }
    return true;
}

void cart::printMeerkats(){
    for (int i = 0; i < 4; i++){
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

