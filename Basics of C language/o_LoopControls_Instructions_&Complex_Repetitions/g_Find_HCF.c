#include <stdio.h>
int main()
{
    int num1, num2, HCF;

    printf("Enter 2 numbers whose HCF has to be calculated: -\n");
    scanf("%d %d", &num1, &num2);

    int smaller_num = (num1 > num2) ? num2 : num1;

    for (int i = 0; i < smaller_num; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
    }
    printf("The HCF of %d %d is: %d\n",num1, num2, HCF);
    return 0;
}
