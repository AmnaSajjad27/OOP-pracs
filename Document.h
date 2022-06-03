#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>
using namespace std;

class Document
{
    protected:

    string title;
    string documentType;
    // only non negative values
    int numPages; 

    public:
    // constructor wihtout parameters that does nothing 
    Document();
    //creates a Document title t, type of document d, and number of pages n
    Document(string t, string d, int n);

    // get and set functions

    //title
    void set_title(string new_title);
    string get_title();
    // documentType
    void set_documentType(string type);
    string get_documentType();
    // numpages
    void set_numPages(int n);
    int get_numPages();

    // pure virtual function
    virtual int typesetMargins() = 0;

    // destructor 
    ~Document();
};
#endif
