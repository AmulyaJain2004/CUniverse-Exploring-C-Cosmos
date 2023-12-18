#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 80

void Delete_vowel(char *ref , char *tochange)
{
    while (*ref != '\0')
    {
        if ((*ref == 'a')||(*ref == 'A')||
            (*ref == 'e')||(*ref == 'E')||
            (*ref == 'i')||(*ref == 'I')||
            (*ref == 'o')||(*ref == 'O')||
            (*ref == 'u')||(*ref == 'U'))
        {
            ref++;
        }
        else
        {
            *tochange++ = *ref++;
        }
    }

    *tochange = '\0';
    printf("Sentence after removing all vowels are: -\n");

}

int main()
{
    char *sentence = (char*)malloc(MAX_LENGTH*sizeof(char));
    printf("Enter a sentence of maximum %d characters: -\n", MAX_LENGTH);
    gets(sentence);

    char *new_sen = (char*)malloc(MAX_LENGTH*sizeof(char));
    Delete_vowel(sentence, new_sen);
    puts(new_sen);

    free(new_sen);
    free(sentence);
    return 0;
}
