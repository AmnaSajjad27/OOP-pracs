# include <iostream> 
# include <string>

using namespace std;

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){

    // 
    cout << "Report card ";
    // print out cource names 
    for (int i = 0; i < 4; i++){
    cout << courses[i] << " ";
    }
    cout << endl;

    // print out student name
    for (int i = 0; i < nstudents; i++){
    cout << students[i];
      cout << " ";
    for (int j = 0; j < 4; j++){
    // print out the 4 cources for that student
    cout << report_card[i][j];
    if (j!=3){
            cout << " ";
    }

    }
    cout << endl;
    }
 

    // newline 
    // next student 


    }