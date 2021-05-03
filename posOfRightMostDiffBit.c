/******************************************************************************

Given two numbers M and N. The task is to find the position of the rightmost
different bit in the binary representation of numbers.

Example 1: 

Input: M = 11, N = 9
Output: 2
Explanation: Binary representation of the given 
numbers are: 1011 and 1001, 
2nd bit from right is different.

*******************************************************************************/
#include <stdio.h>

int right_Most_Diff_Bit(int a, int b)
{
    int Pos = 1;
    int Bit_a = 0,Bit_b = 0;
    while(a !=0 || b != 0)
    {
        Bit_a = a & 0x01;
        Bit_b = b & 0x01;
        if(Bit_a != Bit_b)
        {
            return Pos;
        }
        a = a >> 1;
        b = b >> 1;
        ++Pos;
    }
    return 0;
}
int main()
{
    int x = 11,y=9;
    printf("%d \n",right_Most_Diff_Bit(x,y));

    return 0;
}
