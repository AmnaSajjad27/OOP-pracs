# include "Document.h"
# ifndef PDF_H
# define PDF_H

class PDF:public Document{

    protected:
                  // calls the Contract constructor with numPage==5
    int version;  // stores the pdf version attribute  

    public:
     PDF();        // inherit from base class default constructor
    PDF(int v);    // sets the version of the pdf

    bool hasTOCVersion(); // checks if there is a Table of Contents feature
    int get_version(); // returns version attribute
    void set_version(int version);

        int typesetMargins()override;

    ~PDF();
};
#endif