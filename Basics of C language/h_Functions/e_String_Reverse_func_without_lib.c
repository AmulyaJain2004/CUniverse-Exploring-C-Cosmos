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

int string_reverse(char *chs, int n)
{
    for (int i = n-1; i>=0;i--)
    {
        printf("%c",*(chs+i));
    }
    return 0;
}


int main()
{
    char string[50];
    printf("Enter the string to reverse the string: -\n");
    gets(string);
    int string_len = string_length(string);
    string_reverse(string, string_len);
    return 0;
}
