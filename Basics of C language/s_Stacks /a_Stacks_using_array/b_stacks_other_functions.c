#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int size;
    int top;
    int* pta;
}Stack;

int peek (Stack st, int pos)
{
    int x = -1;
    if ((st.top - pos + 1) < 0)
    {
        printf("Invalid Position\n");
    }
    else
    {
        x = st.pta[st.top - pos + 1];
    }
    return x;
}

int stackTop (Stack st)
{
    if (st.top == -1)
    {
        return -1;
    }
    else
    {
        return st.pta[st.top];
    }
}

int isEmpty (Stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull (Stack st)
{
    if  (st.top == st.size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(Stack* st, int x)
{
    if (isFull(*st))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        st->pta[++st->top] = x;
    }
}

int pop(Stack* st)
{
    int x = -1;
    if (isEmpty(*st))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        x = st->pta[st->top--];
    }
    return x;
}

int main ()
{
    Stack st;
    printf("Enter the size of Stack: -\n");
    scanf("%d",&st.size);
    st.pta  = (int*)malloc(st.size);
    st.top = -1;

    int n;
    printf("Enter the number of elements you want to enter in stack: -\n");
    scanf("%d",&n);
    for(int i = 0 ; i  < n ; i++)
    {
       int element;
       printf("\nEnter element %d :-\n",i+1);
       scanf("%d", &element);
       push(&st,element);
    }

    while( !isEmpty(st))
    {
        printf( "%d " ,pop( &st ));
    }
    return 0;
}
