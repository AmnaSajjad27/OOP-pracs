# include <iostream> 
# include <string>

// function that takes an integer and returns the corrosponfing month or "invalid"

    using namespace std;

std::string lookup_month(int month){

    // returns a string 
     std::string abv;
    

    switch (month) {

        case 1:
        abv = "Jan";
        //std::cout << "Jan";
        break;

        case 2:
        abv = "Feb";
       // std::cout << "Feb";
        break;

        case 3:
        abv = "Mar";
        //std::cout << "Mar";
        break;

        case 4:
        abv = "Apr";
        //std::cout << "Apr";
        break;

        case 5:
        abv = "May";
        //std::cout << "May";
        break;

        case 6:
        abv = "Jun";
        //std::cout << "Jun";
        break;

        case 7:
        abv = "Jul";
        //std::cout << "Jul";
        break;

        case 8:
        abv = "Aug";
        //std::cout << "Aug";
        break;

        case 9:
        abv = "Sep";
       // std::cout << "Sep";
        break;

        case 10:
        abv = "Oct";
        //std::cout << "Oct";
        break;

        case 11:
        abv = "Nov";
        //std::cout << "Nov";
        break;

        case 12:
        abv = "Dec";
        //std::cout << "Dec";
        break;

        default:
        abv = "invalid month";
        break;

    }
    return abv;

}