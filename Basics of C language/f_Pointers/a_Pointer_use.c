#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number: -\n");
    scanf("%d",&x);
    int *y;
    y=&x;
    printf("address of number using &: %d\n",&x);
    printf("address of number using pointer variable that stored that number: %d\n",y);
    printf("address of number using pointer variable with &*: %d\n",*&y);
    printf("value of number using variable: %d\n", x);
    printf("value of number using pointer variable and *: %d\n",*y);
    return 0;
}
