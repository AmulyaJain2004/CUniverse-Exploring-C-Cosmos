#include <stdio.h>
int main()
{
    int count = 0, number, digit, sum = 0;

    printf("Enter any number: -\n");
    scanf("%d", &number);
    for (; number != 0;)
    {
        digit = number % 10;
        number = number / 10;
        sum += digit;
        count++;
    }

    printf("The number of digits in the number is %d \n", count);
    printf("The sum of digits of the number is %d \n", sum);
    return 0;
}
