#include <stdio.h>
struct myArray
{
    int total_size;
    int actual_size;
    int *ptr;
};
void createArray(struct myArray * a,int tSize,int uSize){
    (*a).total_size=tSize;
    (*a).used_size=uSize;
    int *ptr= (int *)malloc(tSize*sizeof(int));
}

int main(){
    struct myArray marks;
    {
        struct myARRAY marks;
        createArray(&marks,100,20);
        
    };
    
  
    return 0;
}