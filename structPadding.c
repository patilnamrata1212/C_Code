#include <stdio.h>
typedef struct node1
{
    char c1;
    double d1;
    int s1;
}node1;

typedef struct node2
{
    char c1;
    double d1;
    int s1;
    char c2;
}node2;

typedef struct node3
{
    char c1;
    double d1;
    int s1;
    double d2;
}node3;

int main()
{
    node1 sNode1;
    printf("\n size of struct having inline of (char,double,int) : %ld",sizeof(sNode1));

    node2 sNode2;
    printf("\n size of struct having inline of (char,double,int,char) : %ld",sizeof(sNode2));

    node3 sNode3;
    printf("\n size of struct having inline of (char,double,int,double) : %ld",sizeof(sNode3));
    return 0;
}

//output 
// size of struct having inline of (char,double,int) : 24
// size of struct having inline of (char,double,int,char) : 24
// size of struct having inline of (char,double,int,double) : 32
