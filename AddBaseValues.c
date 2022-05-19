/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int getIntValue(char value)
{
    int ret = 0;
    if(value > '0' && value < '9')
    {
        ret = value - '0';
    }
    else if(value > 'A' && value < 'F')
    {
        ret = value - 'A' + 10;
    }
    //printf("getIntValue: %d\n",ret);
    return ret;
}
char getBaseValue(int value)
{
    char ret ;
    if(value > 0 && value < 9)
    {
        ret  = value + '0';
    }
    if(value > 10 && value < 15)
    {
        ret = value - 10 + 'A';
    }
    //printf("getBaseValue: %c\n",ret);
    return ret;
}
char* Add2Number(char* num1, char* num2)
{
    int l_num1 = strlen(num1);
    int l_num2 = strlen(num2);
    int l_sum = (l_num1>l_num2)? l_num1 : l_num2;

    char *sum = (char*)malloc((l_sum) * sizeof(char));
    unsigned char carry = 0; 
    int add=0;
    for(int i= (l_sum-1); i>=0; i--)
    {
        add = getIntValue(toupper(num1[i])) + getIntValue(toupper(num2[i])) + carry;
        carry = 0;
        if(add > 15)
        {
            carry = 1;
            add -= 15; 
        }
        sum[i] = getBaseValue(add);
    }
    return sum;
}
int main()
{
    char *num1 = "123";
    char *num2 = "123";

    printf("Sum value : %s \n", Add2Number(num1,num2));
    return 0;
}
