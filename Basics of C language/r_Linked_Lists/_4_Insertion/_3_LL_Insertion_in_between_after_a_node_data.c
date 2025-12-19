#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};


int main()
{
    struct node *head = (struct node *)malloc (sizeof (struct node));
    struct node *temp = head;

    int n;
    printf("Enter the number of entries you want to enter: -\n");
    scanf("%d",&n);


    for (int i = 0 ; i<n; i++)
    {
        if (i == 0 )
        {
            printf("Enter the data: -\n");
            scanf("%d",&head->data);
        }
        else
        {
            struct node *newnode = (struct node *)malloc (sizeof(struct node));

            temp->next = newnode;

            printf("Enter the data: -\n");
            scanf("%d",&newnode->data);
            newnode->next = NULL;

            temp = newnode;
        }
    }
    
    temp = head;
    printf("The elements of linked list are: -\n");
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
    // we can put inside do_while loop or while loop also
    int val;
    printf("\nEnter value of the node after which new node is to be inserted: -\n");
    scanf("%d",&val);

    temp = head;
    while (temp->data != val) 
    {
        temp = temp->next;
    }

    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data for new node: -\n");
    scanf("%d",&new_node->data);
    new_node->next = temp->next;
    temp->next = new_node;

    temp = head;
    printf("The elements of new linked list are: -\n");
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    // Free the allocated memory to avoid memory leaks
    temp = head;
    while (temp != NULL)
    {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    return 0;
}
