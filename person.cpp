# include <string>
# include "person.h"

using namespace std;

// Default constuctor 
person::person(){
    myName = "NA";
    Salary = 1000;
}

person::person(string _myName, int _Salary){
    myName = _myName;
    Salary = _Salary;
}

// setter name 
void setName(string myName){
    myName = myName;
}
// getter name
string getName();

// setter Salary
void setSalary(int mySalary){
    mySalary = mySalary;
}
// getter Salary
int getSalary();