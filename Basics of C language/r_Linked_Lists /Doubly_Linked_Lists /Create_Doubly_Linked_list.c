#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *prev;
    struct node *next;
};

int main()
{
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));

    struct node *head = first;
    
    first->data = 20;
    first->prev = NULL;
    first->next = second;

    second->data = 30;
    second->prev = first;
    second->next = NULL;

    struct node *end = second;
//-----------------------------------------------------------------//
    struct node *new1 = (struct node*)malloc(sizeof(struct node));
    new1->data = 10;
    new1->prev = NULL;
    new1->next = first;
    head = new1;
    first->prev = new1;

    struct node *new2 = (struct node*)malloc(sizeof(struct node));
    new2->data = 40;
    new2->prev = second;
    new2->next = NULL;
    end = new2;
    second->next = new2;
    return 0;
}
