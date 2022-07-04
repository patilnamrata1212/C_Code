#include <stdio.h>

int FindSubarray(int *arr,int size)
{
    int subStart=-1,subend=-1,max = 0;
    for(int i=0;i<size;i++)
    {

        if(arr[i] > arr[i+1] && subStart < 0)
        {
            subStart = i;
        }
        if(arr[i] > max)
        {
            max = arr[i];
            if(arr[i] < arr[i+1] && i > subStart)
            {
                subend = i;
            }
        }
    }
    printf("subStart : %d subend : %d\n",subStart,subend);
}

int main()
{
    int len = 10;
    int arr[10] = {10,12,20,30,25,40,32,31,12,60};
    FindSubarray(arr,len);

    return 0;
}
