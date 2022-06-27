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


/// Second approch //////
#include <stdio.h>
typedef union IntegerValue
{
    unsigned int value;
    struct 
    {
        unsigned char LN_byte1 : 4;
        unsigned char UN_byte1 : 4;
        unsigned char LN_byte2 : 4;
        unsigned char UN_byte2 : 4;
        unsigned char LN_byte3 : 4;
        unsigned char UN_byte3 : 4;
        unsigned char LN_byte4 : 4;
        unsigned char UN_byte4 : 4;

    }Nibbles;
}uValues;
int main()
{
    uValues u_obj;
    u_obj.value = 0x93787288;
    printf("\n before %x\n", u_obj.value);
    unsigned char arr[8] = {0};
    arr[0] = u_obj.Nibbles.LN_byte1;
    arr[1] = u_obj.Nibbles.UN_byte1;
    arr[2] = u_obj.Nibbles.LN_byte2;
    arr[3] = u_obj.Nibbles.UN_byte2;
    arr[4] = u_obj.Nibbles.LN_byte3;
    arr[5] = u_obj.Nibbles.UN_byte3;
    arr[6] = u_obj.Nibbles.LN_byte4;
    arr[7] = u_obj.Nibbles.UN_byte4;
    unsigned char temp = 0;
    for(int i =0;i<8;i++)
    {
        for(int j=i;j<8;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] =temp;
            }
        }
    }
    u_obj.Nibbles.LN_byte1 = arr[7];
    u_obj.Nibbles.UN_byte1 = arr[6];
    u_obj.Nibbles.LN_byte2 = arr[5];
    u_obj.Nibbles.UN_byte2 = arr[4];
    u_obj.Nibbles.LN_byte3 = arr[3];
    u_obj.Nibbles.UN_byte3 = arr[2];
    u_obj.Nibbles.LN_byte4 = arr[1];
    u_obj.Nibbles.UN_byte4 = arr[0];
    printf("\n After %X\n", u_obj.value);
   return 0;
}
