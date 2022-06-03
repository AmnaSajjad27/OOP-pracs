# include "Document.h"
# include "Contract.h"

// default constructors 
Contract::Contract(int n):Document(title,documentType,numPages){
    docID = 0;
    
    //incrementing amountDoc
    amountDoc = docID;  
    //docID is assigned the value of amountDoc in the constructor before amountDoc is incremented
    amountDoc++;
}

// get and set functions
void Contract::set_amountDoc(int amount){
    amountDoc = amount;
}
int Contract::get_amountDoc(){
    return amountDoc;
}

void Contract::set_docID(int ID){
    docID = ID;
}
int Contract::get_docID(){
    return docID;
}

// contract's implentation of the pure virtual function type set margin
// either the value of amountDoc if the document is only one page, otherwise if the Contract is more than one page, return half the pages of numPages
int Contract::typesetMargins(){
    if (numPages == 1){
        return (amountDoc-1);
    }
    else {
        return (0.5*numPages);
    }
}

// set the private static attribute amountDoc
int Contract::amountDoc = 0;

// destrutcor
Contract::~Contract(){};