/******************************************************************************

Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.
Example 1:

Input:
K = 3
arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
Output: 1 2 3 4 5 6 7 8 9
Explanation:Above test case has 3 sorted
arrays of size 3, 3, 3
arr[][] = [[1, 2, 3],[4, 5, 6], 
[7, 8, 9]]
The merged list will be 
[1, 2, 3, 4, 5, 6, 7, 8, 9].

*******************************************************************************/
#include <stdio.h>
void Merge_and_sort(int arr[][3],int k)
{
    int temp[9] = {0};
    int t = 0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            temp[j+(i*k)] = arr[i][j];
        }
    }
    for(int i=0;i<k*k;i++)
    {
        for(int j=i;j<k*k;j++)
        {
            if(temp[i]>temp[j])
            {
                t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }
    for(int i=0;i<k*k;i++)
    {
        printf("%d ",temp[i]);
    }
}
int main()
{
    int arr[3][3] =  {{1,4,3},{4,5,6},{0,8,9}};
    Merge_and_sort(arr,k);
    return 0;
}
