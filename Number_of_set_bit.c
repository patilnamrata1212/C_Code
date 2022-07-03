#include <stdio.h>

int main()
{
    int a = 0xaa;
    int count = 0;
    while(a != 0)
    {
        a = (a)&(a-1);
        ++count;
    }
    printf("Number of ones : %d",count);
    return 0;
}
