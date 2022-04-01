# include <iostream> 

extern int* min_max(int **vals,int num_rows, int num_cols);

int main(){

    int row1[]={10,15,99};
    int row2[]={100,5,73};
    int row3[]={23,56,1};
    int *vals[]={row1,row2,row3};


int num_rows = 3;
int num_cols = 3;

int *array;
array = min_max(vals,num_rows,num_cols);
std::cout << *array << std::endl;


//int *mm = min_max(vals,nrows,ncols);

}