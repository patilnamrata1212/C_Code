/******************************************************************************

Given an integer an N. The task is to return the position of first set bit found 
from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function.  

Example 1:

Input: N = 18
Output: 2
Explanation: Binary representation of 
18 is 010010,the first set bit from the 
right side is at position 2.

*******************************************************************************/
#include <stdio.h>

int SetBitPosition(int a)
{
    int temp = 0; 
    int shiftPos = 0;
    while(a != 0)
    {
        temp = a & (0x01);
        if(temp == 1)
        {
            return shiftPos;
        }
        a = a >> 1;
        ++shiftPos ;
    }
    return 0;
}
int main()
{
    int x = 12;
    printf("%d \n",SetBitPosition(x));

    return 0;
}
