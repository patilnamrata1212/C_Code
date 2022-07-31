#include <stdio.h>
// Declare a function
int (*fptr)(int,int);

int add(int x,int y)
{
    return x+y;
}

int main()
{
    // 1. Assigned function address to fptr 
    fptr = add;
    
    
    printf("\nOne ways of calling (fptr(2,5)) : %d",fptr(2,5));
    
    printf("\nSecond ways of calling (*fptr)(4,4): %d ",(*fptr)(4,4));

    return 0;
}
