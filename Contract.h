# include "Document.h"
# ifndef CONTRACT_H
# define CONTRACT_H

class Contract:public Document{

    protected:
    // unique document id
    int docID;
    // private static attribute 
    // initlaise in contract.cpp file 
    static int amountDoc;

    public:
    //sets number of pages 
    //calls the constructor of the document class with title==""
    //documentType=="Contract" and numPage=n
    Contract(int n); 

    // constructor that does nothing 
    Contract();

    // get and set functions

    // amountdoc
    void set_amountDoc(int amount);
    int get_amountDoc();

    //docID
    void set_docID(int ID);
    int get_docID();

    int typesetMargins()override;


~Contract();
};
# endif