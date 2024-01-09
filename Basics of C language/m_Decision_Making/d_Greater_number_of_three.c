#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number \n");
    scanf("%d",&a);
    printf("Enter the second number \n");
    scanf("%d",&b);
    printf("Enter the third number \n");
    scanf("%d",&c);
    
    if (a>b)
    {
        if (c>a)
        {
            printf("Greatest of all given numbers is %d \n", c);
        }
        else 
        {
            printf("Greatest of all given numbers is %d \n", a);
        }
    }
    else 
    {
        if (c>b)
        {
            printf("Greatest of all given numbers is %d \n", c);
        }
        else 
        {
            printf("Greatest of all given numbers is %d \n", b);
        }
    }
    return 0;
}
