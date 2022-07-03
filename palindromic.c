#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char arr[] = "nitin";
    int len = (strlen(arr));
    printf("len %d \n",len);
    for(int i=0;i<(len/2);i++)
    {
        if(arr[i] == arr[len-i-1])
        {
            printf("arr : %d %d \n",arr[i],arr[len-i-1]);
            continue;
        }
        else
        {
            printf("String is not palindromic\n");
            return 0;
        }
    }
    printf("String is palindromic\n");

    return 0;
}
