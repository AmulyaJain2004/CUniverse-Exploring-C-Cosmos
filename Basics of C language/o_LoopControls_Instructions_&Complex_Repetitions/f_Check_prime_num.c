#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to check whether it is prime number or not: -\n");
    scanf("%d",&n);
    int a =0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            a++;
        }
    }
    if (a==2)
    {
        printf("number is prime\n");
    }
    else
    {
        printf("number is composite\n");
    }
    return 0;
}
