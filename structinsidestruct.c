#include <stdio.h>


typedef struct 
{
    char a;
    int b;
}strB;


typedef struct 
{
    char a;
    int b;
}strC;

struct ABC
{
    int a;
    strB b;
    strC *c;
};

int main()
{
    struct ABC bansi;
    bansi.a = 10;
    
    strB nammu = {'N', 11};
    
    bansi.b = nammu;
    
    strC soni = {'S'};
    
    bansi.c = &soni;
    
    
    printf("%d %c %d %c %d", bansi.a, bansi.b.a, bansi.b.b, bansi.c->a, bansi.c->b);
    
    return 0;
}
