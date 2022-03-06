#include <iostream>
#include <stdlib.h>

extern void passorfail(char grade);

int main(){
   char grade = 'A';
   
   passorfail(grade);
}