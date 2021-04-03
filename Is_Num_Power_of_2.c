/******************************************************************************

Given a positive integer N. The task is to check if N is a power of 2.
More formally, check if N can be expressed as 2x for some x.
 

Example 1:

Input: N = 1
Output: true
Explanation: 1 is equal to 2 raised to 0 (20 == 1).
Example 2:

Input: N = 98
Output: false
Explanation: 
98 cannot be obtained by any power of 2.

*******************************************************************************/
#include <stdio.h>
int Power_Of_2(int Num)
{
    int count =0;
    int x = 0;
    while(x < Num )
    {
        x = 1<<count;
        if(x == Num)
        {
            return 1;
        } 
        ++count;
    }
    return 0;
}
int main()
{
   printf("%d\n",Power_Of_2(98));
   return 0;

}
