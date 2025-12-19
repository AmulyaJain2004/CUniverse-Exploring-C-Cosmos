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


    printf("Inserting in between: -\n");
    int a;
    printf("Enter the index: -\n");
    scanf("%d",&a);
    temp = head;
    for (int i = 0; i<a; i++)
    {
        temp = temp->next;
    }
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data for new node: ");
    scanf("%d",&newnode->data);
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;

    temp = head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    return 0;
}
