#include <stdio.h>

typedef union DeviceStatus{
    unsigned char status;
    struct
    {
        unsigned char bit1 : 1;
        unsigned char bit2 : 1;
        unsigned char bit3 : 1;
        unsigned char bit4 : 1;
        unsigned char bit5 : 1;
        unsigned char bit6 : 1;
        unsigned char bit7 : 1;
        unsigned char bit8 : 1;
    }status_bit;
}Dev;

int main()
{
    Dev obj_DeviceStatus;
    obj_DeviceStatus.status = 0x0f;

    printf("union : %x\n",obj_DeviceStatus.status);   
    printf("%d ",obj_DeviceStatus.status_bit.bit1);
    printf("%d ",obj_DeviceStatus.status_bit.bit2);
    printf("%d ",obj_DeviceStatus.status_bit.bit3);
    printf("%d ",obj_DeviceStatus.status_bit.bit4);
    printf("%d ",obj_DeviceStatus.status_bit.bit5);
    printf("%d ",obj_DeviceStatus.status_bit.bit6);
    printf("%d ",obj_DeviceStatus.status_bit.bit7);
    printf("%d ",obj_DeviceStatus.status_bit.bit8);
}

//==> o/p 
// union : f
// 1 1 1 1 0 0 0 0 
//
