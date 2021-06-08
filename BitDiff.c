/******************************************************************************

You are given two numbers A and B. The task is to count the number of bits 
needed to be flipped to convert A to B.

Example 1:

Input: A = 10, B = 20
Output: 4
Explanation:
A  = 01010
B  = 10100
As we can see, the bits of A that need 
to be flipped are 01010. If we flip 
these bits, we get 10100, which is B.

*******************************************************************************/
#include <stdio.h>
int BitDiff(int a,int b)
{
    int temp_a=0,temp_b=0;
    int count = 0;
    while(a != 0 & b != 0)
    {
        temp_a = a >> 1;
        temp_b = b >> 1;
        if (temp_b != temp_a )
        {
            ++count;
        }
        a = a >> 1;
        b = b >> 1;
    }
    return count;
}
int main()
{
    int a =25,b=20;
   printf("%d\n",BitDiff(a,b));
   return 0;

}


/***********************************************************************/
#include <stdio.h>

int main()
{
    int a=10,b=5; //1010 , 0101
    int temp  = a^b;
    int count = 0;
    while(temp != 0)
    {
        if(temp & 0x01)
        {
            ++count;
        }
        temp = temp >> 1;
    }
    printf("%d\n",count);
    return 0;
};
