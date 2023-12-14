#include <stdio.h>
int Generate_sum_num(int a)
{
    if (a==0)
    {
        return 0;
    }
    return (a+Generate_sum_num(a-1));
}
int main()
{
    int n; 
    printf("Enter the number upto which sum of consecutive numbers from 1 has to be calculated: -\n");
    scanf("%d",&n);

    int sum = Generate_sum_num(n);
    printf("Sum of numbers upto number given: %d",sum);
    return 0;
}
