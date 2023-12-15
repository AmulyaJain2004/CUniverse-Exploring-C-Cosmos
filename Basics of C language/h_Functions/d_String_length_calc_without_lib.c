#include <stdio.h>

int string_length(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char string[50];
    printf("Enter the string to calculate its length: -\n");
    gets(string);

    int string_len = string_length(string);
    printf("Length of %s is %d",string,string_len);
    return 0;
}
