/******************************************************************************

Given a number N and a bit number K, check if Kth bit of N is set or not. 
A bit is called set if it is 1. Position of set bit '1' should be indexed 
starting with 0 from LSB side in binary representation of the number.

Example 1:

Input: N = 4, K = 0
Output: No
Explanation: Binary representation of 4 is 100, 
in which 0th bit from LSB is not set. 
So, return false.

*******************************************************************************/
#include <stdio.h>

int Kth_Bit_State(int a, int k)
{
    return ((a >> k) & 0x01);
}
int main()
{
    int x = 4,y=1;
    printf("%d \n",Kth_Bit_State(x,y));

    return 0;
}
