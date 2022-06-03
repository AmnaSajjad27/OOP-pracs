# include "Document.h"
# include "PDF.h"

// default constructor 
PDF::PDF():Document(title,documentType,numPages){};

PDF::PDF(int v):Document(title,documentType,numPages){
    version = v;
};

// set version 
void PDF::set_version(int version){
    version = version;
}

//function implentations
bool PDF::hasTOCVersion(){
    if (version > 5){
        return true;
    }
    else{
        return false;
    }
}
    int PDF::get_version(){
        return version;
    }

    PDF::~PDF(){};