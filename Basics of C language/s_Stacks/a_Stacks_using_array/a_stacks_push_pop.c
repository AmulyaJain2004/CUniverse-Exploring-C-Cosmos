#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int size;
    int top;
    int* pta;
}Stack;

void push(Stack* st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        st->top ++;
        st->pta[st->top] = x;
    }
}

int pop(Stack* st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        x = st->pta[st->top];
        st->top --;
    }
    return x;
}

int main()
{
    Stack st;
    printf("Enter the size of Stack: -\n");
    scanf("%d",&st.size);
    st.pta  = (int*)malloc(st.size);
    st.top = -1;

    push(&st, 3);
    push(&st, 5);

    while(st.top != -1)
    {
        printf( "%d " ,pop( &st ));
    }
    return 0;
}
