#include <stdio.h>
#define size 10
int main()
{
    unsigned int arr[size] = {11,2,9,5,6,8,2,8,4,5};
    unsigned int min = 0xffffffff,max =0,min_index=0,max_index=0;
    for(int i=0;i<size;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }
        if(max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
    }
    printf("%d %d %d ",min,max, (min_index - max_index));
 }
