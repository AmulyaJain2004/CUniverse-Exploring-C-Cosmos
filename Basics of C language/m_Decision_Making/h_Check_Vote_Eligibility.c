#include <stdio.h>
int main()
{
    int age;
    printf("Enter age of the candidate: -\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("The candidate is eligible to vote.\n");
    }
    else if (age < 18)
    {
        printf("The candidate is not eligible to vote.\n");
    }
    else
    {
        printf("Enter valid age!\n");
    }
    return 0;
}
