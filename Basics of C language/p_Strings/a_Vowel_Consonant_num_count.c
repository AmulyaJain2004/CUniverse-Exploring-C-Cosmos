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

int Count_Cons_Vowel_num(char *str, int string_len)
{
    int cons_count = 0;
    int vowel_count = 0;
    while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            vowel_count++;
        }

        else if ((*str != 32) && (*str != 48) && (*str != 49) && (*str != 50) && (*str != 51) && (*str != 52) && (*str != 53) && (*str != 54) && (*str != 55) && (*str != 59) && (*str != 60) && (*str != 61))
        {
            cons_count++;
        }

        str++;
    }
    printf("The number of vowels are %d and consonants are %d in this String.", vowel_count, cons_count);
}
int main()
{
    char string[50];
    printf("Enter the string to find number of vowels and consonants in it: -\n");
    gets(string);

    int string_len = string_length(string);

    Count_Cons_Vowel_num(string, string_len);
    return 0;
}
