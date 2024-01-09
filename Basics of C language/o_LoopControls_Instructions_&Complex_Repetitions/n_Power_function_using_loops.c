#include <stdio.h>
int main()
{
    int base, exponent;
    printf("Enter the number and the exponent to which its power has to be raised: -\n");
    scanf("%d %d", &base, &exponent);

    int power_num = 1;
    int i = 1;
    while (i <= exponent)
    {
        power_num = power_num * base;
        i++;
    }

    printf("Number %d when raised to power %d gives: %d\n", base, exponent, power_num);
    return 0;
}
