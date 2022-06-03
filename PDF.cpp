# include "Document.h"
# include "Contract.h"
# include "PDF.h"

// default constructor 
PDF::PDF():Contract(numPages){};

PDF::PDF(int v):Contract(numPages){
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
    else {
        return false;
    }
}
    int PDF::get_version(){
        return version;
    }

    PDF::~PDF(){};