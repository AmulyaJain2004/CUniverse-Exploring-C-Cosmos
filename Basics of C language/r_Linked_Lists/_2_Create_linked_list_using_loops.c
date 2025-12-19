#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int main()
{
    head = (struct node*)malloc(sizeof(struct node));

    struct node *temp = head;

    int n;
    printf("Enter the number of entries you want to make: -\n");
    scanf("%d",&n);

    printf("Enter the element you want to enter: -\n");
    scanf("%d",&head->data);

    for (int i = 1; i < n; i++)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        temp->next = newnode;

        int a;
        printf("Enter the element you want to enter: -\n");
        scanf("%d",&a);

        newnode->data = a;
        newnode->next = NULL;

        temp = newnode;
    }

    temp = head;
    while (temp->next != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);

    // Free allocated memory
    temp = head;
    while (temp != NULL)
    {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    return 0;
}
