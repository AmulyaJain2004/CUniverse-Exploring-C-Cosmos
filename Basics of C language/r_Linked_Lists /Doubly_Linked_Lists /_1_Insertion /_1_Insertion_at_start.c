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
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;

    int n;
    printf("enter the number of entries: ");
    scanf("%d",&n);

    printf("enter the data: ");
    scanf("%d",&head->data);

    head->prev = NULL;
    head->next = NULL;
    
    for (int i = 1; i<n; i++)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = NULL;
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        temp = newnode;
    }

    temp = head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("Inserting at start: -\n");
    temp = head;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data for new node: ");
    scanf("%d",&newnode->data);
    newnode->prev = NULL;
    newnode->next = temp;
    temp->prev = newnode;
    temp = newnode;

    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    return 0;
}
