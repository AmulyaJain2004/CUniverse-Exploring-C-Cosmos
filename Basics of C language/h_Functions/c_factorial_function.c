#include <stdio.h>

int factorial (int x)
{
    if ((x==1) || (x==0))
    {
        return 1;
    }
    else 
    {
        return (x*(factorial(x-1)));
    }
}

int factorial (int);

int main()
{
    int a;

    printf("Enter the Number of which factorial is to be calculated: -\n");
    scanf("%d",&a);

    int num = factorial (a);
    printf("Factorial of the number given is: %d", num);

    return 0;
}
