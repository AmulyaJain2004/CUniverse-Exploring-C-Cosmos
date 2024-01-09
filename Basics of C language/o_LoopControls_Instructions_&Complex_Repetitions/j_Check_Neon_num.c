#include <stdio.h>
int main()
{
    int n, digit,sum_digit_sq=0,sum=0;
    printf("Enter the number to check whether the number is neon or not: -\n");
    scanf("%d",&n);
    for (int i = n ; i>0; i/=10)
    {
        digit = i%10;
        sum_digit_sq += digit*digit;
    }

    printf("%d\n",sum_digit_sq);

    for (int i =sum_digit_sq;i>0; i/=10 )
    {
        digit = i%10;
        sum += digit;
    }
    
    
    if (n==sum)
    {
        printf("Given Number is neon number\n");
    }
    else
    {
        printf("Given Number is not neon number\n");
    }
    return 0;
}
