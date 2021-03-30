/******************************************************************************

Given an array of distinct integers. The task is to count all the triplets such 
that sum of two elements equals the third element.
 
Example 1:

Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 2
Explanation: There are 2 triplets: 
1 + 2 = 3 and 3 +2 = 5 

*******************************************************************************/
#include <stdio.h>
int triplets(int *arr,int size)
{
    int count = 0;
    int sum =0;
    for(int i =0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            sum = arr[i] + arr[j];
            for(int k=0;k<size-1;k++)
            {
                if(sum == arr[k])
                {
                    ++count;
                    break;
                }
            }
        }
    }
    return count;
}
int main()
{
   int arr[4] = {1, 5, 3, 2};
    printf("%d",triplets(arr,sizeof(arr)/sizeof(arr[0])));
    return 0;
}
