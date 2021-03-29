/******************************************************************************

Given an array of length N consisting of only 0s and 1s in random order. 
Modify the array to segregate 0s on left side and 1s on the right side of the array.

Example 1:

Input:
N = 5
arr[] = {0, 0, 1, 1, 0}
Output: 0 0 0 1 1

*******************************************************************************/
#include <stdio.h>
void Segregate(int *arr,int total_size)
{
    int count = 0;
    for(int i=0;i<total_size;i++)
    {
        if(arr[i] == 0)
        {
            ++count;
            printf("0 ");
        }
    }
    for(int i=0;i<(total_size-count);i++)
        printf("1 ");
    
}
int main()
{
    int arr[7] = {0, 0, 1, 1, 1,0,0};
    Segregate(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}
