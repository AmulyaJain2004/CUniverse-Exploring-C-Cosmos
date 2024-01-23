#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
struct node *head ;
struct node *sec ;
struct node *third ;
struct node *fourth ;
struct node *fifth ;

int main()
{
    head =(struct node*)malloc(sizeof(int));
    sec =(struct node*)malloc(sizeof(int));
    third =(struct node*)malloc(sizeof(int));
    fourth =(struct node*)malloc(sizeof(int));
    fifth =(struct node*)malloc(sizeof(int));

    head->data = 5;
    head->next = sec;
 
    
    sec->data = 6;
    sec->next = third;

    
    third->data = 7;
    third->next = fourth;

    
    fourth->data = 8;
    fourth->next = fifth;

    
    fifth->data = 4;
    fifth->next = NULL;

    
    struct node *temp = head;
    for (int i = 0 ; i<5; i++)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }

    return 0;
}
