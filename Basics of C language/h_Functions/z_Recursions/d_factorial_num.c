#include <stdio.h>
int Generate_factorial_num(int a)
{
    if (a==0)
    {
        return 1;
    }
    return (a*Generate_factorial_num(a-1));
}
int main()
{
    int n;
    printf("Enter the number of which factorial has to be calculated: -\n");
    scanf("%d",&n);
    Generate_factorial_num(n);
    return 0;
}
