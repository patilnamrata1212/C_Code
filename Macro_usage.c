/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct command
{
    int clusterID;
    int CommandID;
    int Parameter;
}command;

#define DATABASE_CMD { \
    { 0x05, 0x01, 0x01 }, \
    { 0x05, 0x00, 0x00 }, \
    { 0x08, 0x02, 0x01 }, \
}

const command commandObj[] = DATABASE_CMD;
int main()
{
    for(int i=0;i<3;i++)
    {
        printf("%d %d %d\n",commandObj[i].clusterID,commandObj[i].CommandID,commandObj[i].Parameter);
    }

    return 0;
}


o/p:
5 1 1
5 0 0
8 2 1
