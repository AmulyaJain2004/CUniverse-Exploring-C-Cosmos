#include <stdio.h>
int main()
{
    int number,digit,inverted_number=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    int original_num = number;
    while (number)
    {
        digit = number%10;
        number/=10;
        inverted_number = inverted_number*10 + digit;
    }

    if (inverted_number == original_num)
    {
        printf("%d is Palindrome.\n",original_num);
    }
    else 
    {
        printf("%d is not Palindrome.\n",original_num);
    }
    return 0;
}
