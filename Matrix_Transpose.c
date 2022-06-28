#include <stdio.h>

void MatrixTranspose(int arr[4][4], int r, int c)
{
    int temp = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            if(i == j)
            {
                continue;
            }
            if(i != j)
            {
                temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
        int array[4][4] = {2, 5, 6, 7, 8, 9, 10,11,12,13,14,15,16,17,18,19};
        MatrixTranspose(array,4,4);
        return 0;
}
