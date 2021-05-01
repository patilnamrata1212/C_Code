/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    int flag;
    struct Node *next;
};

void insert(struct Node **Head,int data,int position)
{
    int count = 0;
    struct Node *curr,*last = NULL;
    curr = *Head;
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    
    new_node->data = data;
    if(position == 1)
    {
        new_node->next = curr;
        *Head = new_node;
        
    }
    else
    {
        while(curr != NULL & count < position-1)
        {
            curr = curr->next;
            ++count;
        }
        new_node->next = curr->next;
        curr->next = new_node;
    }
}

void printNode(struct Node **Head)
{
    struct Node *curr = *Head;
    while(curr != NULL)
    {
        printf("%d --> %d -- %d\n",curr->data,curr,curr->next);
        curr = curr->next;
    }
}
int searhLoop(struct Node**Head)
{
    struct Node *curr = *Head;
    while(curr != NULL & curr->flag !=1)
    {
        if(curr->flag == 1)
        {
            return 1;
        }
        curr->flag = 1;
        curr = curr->next;
        
    }
    return 0;
}
int main()
{
    struct Node *Head = NULL;
    insert(&Head,10,1);
    insert(&Head,20,1);
    insert(&Head,30,2);
    insert(&Head,40,3);
    insert(&Head,50,4);
    printf("______%d________\n",searhLoop(&Head));
    printNode(&Head);
    return 0;
}

