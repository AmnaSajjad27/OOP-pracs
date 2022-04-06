# include <string>

using namespace std;

// define a class person 
class person{

    string myName;
    int Salary;

    public:
    person();
    person (string _myName, int _Salary);

void setName(string myName);      // change the person's name
string getName();
void setSalary(int mySalary);     // change the person's salary
int getSalary();

};