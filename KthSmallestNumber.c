#include <stdio.h>

int MinKthValue(int *arr,int size,int k_index)
{
    int temp=0;
    for(int j=0;j<k_index;j++)
    {
         for(int i=j;i<size;i++)
        {
            if(arr[j] > arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i]= temp;
            }
        } 
        for(int k=0;k<size;k++)
        {
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
    printf("%d\n",arr[k_index-1]);
}

int main()
{
    int len = 6,kthIndex = 2;
    int arr[10] = {9,5,4,2,10,11};
    MinKthValue(arr,len,kthIndex);

    return 0;
}
