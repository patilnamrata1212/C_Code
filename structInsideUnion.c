#include <stdio.h>

typedef union abc{
    short int a;
    int b;
    struct xyz
    {
        char x;
        char y;
        char z;
        char w;
    }xyz;
}abc;
int main()
{
    abc obj_a;
    obj_a.b = 0x87654321;

    printf("union : %x\n",obj_a.a);   
    printf(" struct : %x %x %x %x",obj_a.xyz.x,obj_a.xyz.y,obj_a.xyz.z,obj_a.xyz.w);
}

//==> o/p 
//union : 4321
// struct : 21 43 65 87
//
