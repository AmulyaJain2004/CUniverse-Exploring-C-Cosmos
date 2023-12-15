#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem = 0, n = 0;
    double sum = 0;
    printf("enter a number:");
    scanf("%d", &num);

    int count = num;
    int originalnum = num;
    while (count > 0)
    {
        n++;
        count = count / 10;
    }
    count = originalnum;
    while (count > 0)
    {
        rem = count % 10;
        sum += pow(rem, n);
        count = count / 10;
    }
    if (sum == num)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }
    return 0;
}
