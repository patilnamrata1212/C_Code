#include <stdio.h>
void strReverse(char *arr,int len)
{
    if(len < 0)
    {
        return ;
    }
    strReverse(&arr[1],len-1);
    printf("%c",arr[0]);
}
int main()
{
    strReverse("Namrata",7);
    return 0;
}
