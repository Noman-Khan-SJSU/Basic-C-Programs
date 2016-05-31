// LinkedList Implementation

#include<stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void main()
{
    struct Node* A;                 // Pointer to head node
    A = NULL;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = 2;
    temp->next = NULL;
    A = temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = 4;
    temp->next = NULL;
    struct Node* temp1 = A;
    while(temp1->next != NULL)          // Reaching the last node
    {
        temp1 = temp1->next;
    }
}