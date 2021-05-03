/******************************************************************************

Given an array Arr of N elements which is first increasing and then may be decreasing, 
find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Example 1:

Input: 
N = 9
Arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.

*******************************************************************************/
#include <stdio.h>
void Bitonic_Point(int *arr,int total_size)
{
    int count = 0;
    for(int i=0;i<total_size;i++)
    {
        if(arr[i+1]<arr[i])
        {
            printf("%d",arr[i]);
            break;
        }
    }
    
}
int main()
{
    int arr[9] =  {1,15,25,45,42,21,17,12,11};
    Bitonic_Point(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
