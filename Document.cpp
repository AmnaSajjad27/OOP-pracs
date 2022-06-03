#include <string>
#include "Document.h"
using namespace std;

// default constructor 
Document::Document(string t, string d, int n){
    title = t;
    documentType = d;
    numPages = n;
}

// get and set functions 

// title 
void Document::set_title(string new_title){
    title = new_title;
}
string Document::get_title(){
    return title;
}

// documentType
void Document::set_documentType(string type){
    documentType = type;
}
string Document::get_documentType(){
    return documentType;
}

// numPages
void Document::set_numPages(int n){
    numPages = n;
}
int Document::get_numPages(){
    return numPages;
}
