#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter the Alphabet to check whether it is a Vowel or a Consonant: -\n");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
        printf("Entered Alphabet: %c is a Vowel.\n", alphabet);
    }
    else if (((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) &&
             (alphabet != 'a' || alphabet != 'e' || alphabet != 'i' || alphabet != 'o' || alphabet != 'u' ||
              alphabet != 'A' || alphabet != 'E' || alphabet != 'I' || alphabet != 'O' || alphabet != 'U'))
    {
        printf("Entered Alphabet: %c is a Consonant.\n", alphabet);
    }
    else
    {
        printf("Entered Alphabet: %c is not a Alphabet.\n", alphabet);
    }

    return 0;
}
