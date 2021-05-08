#include <stdio.h>

int main()
{
    unsigned int num = 0x93787288;
    unsigned int backupNum = num;
    unsigned int min = 0xf;
    unsigned int temp = 0;
    unsigned int count = 0;
    unsigned int min_index = 0;
     int firstNum = 0;
    while(num != 0)
    {
        temp = num & 0xf;
        if(min > temp)
        {
            min = temp;
            min_index = count;
        }
        ++count;
        firstNum = num;
        num = num >> 4;
    }
    printf("___%d ",min_index);
    if(min_index < count)
    {
        int value = (backupNum & (0xffffffff>>4)) | (min << ((count-1)*4));
        value = ((value & (~(0x0f <<(min_index)*4))) | (firstNum <<(min_index)*4));
        printf("%x", value);
        
    }
    return 0;
}
