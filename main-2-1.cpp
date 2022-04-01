# include <iostream>

extern std::string lookup_month(int month);

int main(){

    int month = 13;

    std::string abv = lookup_month(month);
    std::cout << abv << std::endl;
}