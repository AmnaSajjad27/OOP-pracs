# include <string>
# include "person.h"

using namespace std;

// Default constuctor 
person::person(){
    myName = "";
    Salary;
}

void person:: setName (string Name){
    myName = Name;
}
string person:: getName(){
    return myName;
}

void person:: setSalary(int mySalary){
    Salary = mySalary;
}
int person:: getSalary(){
    return Salary;
}