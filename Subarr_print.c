#include <stdio.h>

void subset(char *arr,int n)
{
    // if n=3 then combination become 8 so used shift operation
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            // check 1 postion in i, if got 1 then print that jth postion
            if(i & (1<<j))
            {
                printf("%c",arr[j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    subset("1234",4);

    return 0;
}
