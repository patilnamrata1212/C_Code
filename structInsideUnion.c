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


//---------------------------------------------------------------------------------------------------------------------------------///
#include <stdio.h>

typedef union value
{
    int a;
    struct
    {
        char arr[8];
    }nibbleValues;
    
}value;

int main()
{
    value obj;
    obj.a = 0x12345678;
    
    printf("%x %x %x %x\n",obj.nibbleValues.arr[0],obj.nibbleValues.arr[1],obj.nibbleValues.arr[2],obj.nibbleValues.arr[3]);

    return 0;
}
