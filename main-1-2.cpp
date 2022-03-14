# include <iostream> 
# include <string>

using namespace std;

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main(){

    const int nstudents = 2;
    string students[nstudents] = {"anna       ", "bob        "};
    string cources[4] = {"a"," b"," c"," d"};

    int report_card[nstudents][4] = {
        {20,20,22,43},
        {20,20,22,43},
    };
    print_class(cources,students,report_card,nstudents);
}