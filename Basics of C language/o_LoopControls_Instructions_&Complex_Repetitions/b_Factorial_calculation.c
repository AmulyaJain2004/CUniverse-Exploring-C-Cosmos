#include<stdio.h>
int main()
{
    int number;
    printf("Enter number to find factorial of that number: -\n");
    scanf("%d",&number);

    int factorial=1;
    int i =1;
    while (i<=number)
    {
        factorial=factorial*i;
        i++;
    }

    printf("The factorial of %d is: %d\n", number, factorial);
    return 0;
}
