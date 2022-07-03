
//____________________ Binary to decimal ____________________

#include <stdio.h>
#include <math.h>
int main()
{
    int a  = 1111;
    int result = 0;
    int x = 1,y=0;
    while (a != 0)
    {
        y = a%10;
        result += (y*x);
        x = x*2;
        a = a/10;
        printf("y : %d result : %d x :%d a : %d \n",y,result,x,a);
    }
    printf("%d\n",result);
    return 0;
}

//____________________ Octal to decimal ____________________

#include <stdio.h>
#include <math.h>
int main()
{
    int a  = 27;
    int result = 0;
    int x = 1,y=0;
    while (a != 0)
    {
        y = a%10;
        result += (y*x);
        x = x*8;
        a = a/10;
        printf("y : %d result : %d x :%d a : %d \n",y,result,x,a);
    }
    printf("%d\n",result);
    return 0;
}
