#include <stdio.h>

int *ptr[10];

int main()
{
    
    int a = 10;
    int b = 11;
    int c = 12;
    int d = 13;
    
    
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    ptr[3] = &d;
    
    for(int i = 0; i<10;i++)
    {
        if(ptr[i] != NULL)
            printf("ptr[%d] = 0x%x = %d\n", i, ptr[i], *ptr[i]);
        
    }
    
    //printf("Hello World");

    return 0;
}
