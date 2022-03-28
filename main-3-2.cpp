# include <iostream> 

extern int *reverseArray(int *numbers1,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(){
    int numbers1[6] = {1,2,3,4,5,6};
    int length = 6;

    int numbers2[6] = {6,5,4,3,2,1};
    
    bool result = equalsArray(numbers1,numbers2,length);

   std::cout << result ;

  // reverseArray(numbers1,length);
}