# include <string>

// Defining a class that represents books 
class book {
    std::string book_name;
    std::string author;
    int number_of_copies;
    bool borrowed;

    public:
    // constructors
        book();
        book(std::string _book_name, std::string _author, int _num_cop, bool _borrowed);
    // setter
        void set_author(std::string new_author);
    // getter
        std::string get_author();
    };
    
