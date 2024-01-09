#include <stdio.h>
int main()
{
    int num1, num2, LCM;

    printf("Enter 2 numbers whose LCM has to be calculated: -\n");
    scanf("%d %d", &num1, &num2);
    int larger_num= (num1 > num2) ? num1 : num2;

    for (int i = larger_num;; i+= larger_num)
    {
        if (i % num1 == 0 && i%num2 == 0)
        {
            LCM = i;
            break;
        }
    }
    printf("The LCM of %d %d is: %d\n",num1, num2, LCM);
    return 0;
}
