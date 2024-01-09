#include <stdio.h>
int main()
{
    char str1[50];
    int l = 0;

    printf("Find the length of a string:\n ");
    printf("Enter a string : ");
    scanf("%s", str1);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }

    printf("The string contains %d number of characters.\n", l);
    printf("So, the length of the string %s is : %d\n", str1, l);
    return 0;
}
