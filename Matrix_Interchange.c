/******************************************************************************

Working with 2D arrays is quite important. Here we will do swapping of columns in a 2D array. 
You are given a matrix arr[][] of r rows and c columns. You need to swap the first column with the last column.

Example:

Input:
r = 3
c = 4
arr[][] = {{1, 2, 3, 4},
           {4, 3, 2, 1},
           {6, 7, 8, 9}}
Output:
4 2 3 1
1 3 2 4
9 7 8 6

*******************************************************************************/
#include <stdio.h>
void Matrix_Interchange(int arr[][4],int row,int col)
{
    int temp = 0;
    for(int i=0;i<row;i++)
    {
        temp = arr[i][0];
        arr[i][0]=arr[i][col-1];
        arr[i][col-1] = temp;
    }
    
}
int main()
{
    int arr[3][4] =  {{1, 2, 3, 4},
                    {4, 3, 2, 1},
                     {6, 7, 8, 9}};
    Matrix_Interchange(arr,3,4);
    for(int i =0;i<3;i++)
    {
        for(int j =0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
