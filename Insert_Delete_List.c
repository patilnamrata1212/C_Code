/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node **Head, int data, int position)
{
    struct Node *curr,*prev;
    int count = 0;
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    curr = *Head;
    new_node->data = data;
    if(position == 1)
    {
        new_node->next = curr;
        *Head = new_node;
    }
    else
    {
        while(curr != NULL && count < position)
        {
            prev = curr;
            curr = curr->next;
            ++count;
        }
        prev->next = new_node;
        new_node->next = curr;
    }
}

void DeleteNode(struct Node **Head, int position)
{
    struct Node *curr,*prev;
    int count=0;
    curr = *Head;
    if(position == 1)
    {
        *Head = curr->next;
    }
    else
    {
        while(curr != NULL && count < position)
        {
            prev = curr;
            curr = curr->next;
            ++count;
        }
        prev->next = curr->next;
    }
}
void printLink(struct Node **Head)
{
    struct Node *curr = *Head;
    while(curr !=NULL)
    {
        printf("%d %x %x\n", curr->data,curr,curr->next);
        curr = curr->next;
    }
}
int main()
{
    struct Node *Head = NULL;
    insert(&Head,10,1);
    insert(&Head,20,2);
    insert(&Head,30,3);
    insert(&Head,40,1);

    printLink(&Head);
    printf("\n__________________________\n");
    DeleteNode(&Head, 2);
    printLink(&Head);
    printf("\n__________________________\n");
    DeleteNode(&Head, 1);
    printLink(&Head);
    printf("\n__________________________\n");
    return 0;
}
