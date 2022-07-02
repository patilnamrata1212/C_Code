#include <stdio.h>

#define MySizeof(type) (char*)(&type+1) - (char*)(&type)

int main()
{
    char a;
    int b;
    long int c;
    float d;
    printf("Char : %ld\n", MySizeof(a));
    printf("Int %ld\n", MySizeof(b));
    printf("long int %ld\n", MySizeof(c));
    printf("Float %ld\n", MySizeof(d));

    return 0;
}
