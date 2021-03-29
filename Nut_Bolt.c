/******************************************************************************

Given a set of N nuts of different sizes and N bolts of different sizes. 
There is a one-one mapping between nuts and bolts. Match nuts and bolts efficiently.

Comparison of a nut to another nut or a bolt to another bolt is not allowed.
It means nut can only be compared with bolt and bolt can only be compared with nut to see which one is bigger/smaller.
The elements should follow the following order ! # $ % & * @ ^ ~ .

Example 1:

Input: 
N = 5
nuts[] = {@, %, $, #, ^}
bolts[] = {%, @, #, $ ^}
Output: 
# $ % @ ^
# $ % @ ^

*******************************************************************************/
#include <stdio.h>
void  Match(char *arr,int total_size,char *nuts,char *bolts,int size)
{
    int Nutflag = 0;
    int Boltflag = 0;
    for(int i=0;i<total_size;i++)
    {
        Nutflag=0;
        Boltflag =0;
       
        for(int j =0;j<size;j++)
        {
            if(nuts[j] == arr[i])
            {
                ++Nutflag; 
            }
            if(bolts[j] == arr[i])
            {
                ++Boltflag;
            }
        }
       //  printf("%d %d %c\n",Nutflag,Boltflag,arr[i]);
        if(Boltflag>0 & Nutflag >0 & Nutflag == Boltflag)
        {
            for(int j =0;j<Boltflag;j++)
            {
                 printf("%c ",arr[i]);
            }
        }
    }
}
int main()
{
    char arr[9] = {'!', '#','$', '%', '&', '*', '@', '^', '~' };
    char nuts[5] = {'@', '%', '$', '#', '^'};
    char bolts[5] = {'%','@', '#', '$','^'};
    Match(arr,9,nuts,bolts,5);
    return 0;
}
