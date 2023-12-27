#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter the first number: -\n");
    scanf("%d",&a);
    printf("Enter the second number: -\n");
    scanf("%d",&b);
    int *x =&a;
    int *y =&b;
    
    if (*x > *y)
    {
        printf("%d is greater", a);
    }
    else if (*x < *y)
    {
        printf("%d is greater", b);
    }
    else
    {
        printf("both are equal");
    }
    return 0;
}
