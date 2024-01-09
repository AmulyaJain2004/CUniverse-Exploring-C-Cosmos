#include <stdio.h>
int main()
{
    char chr;
    printf("Enter Character of your choice to Classify it: -\n");
    scanf("%c", &chr);

    if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'))
    {
        printf("Entered Character: %c is an Alphabet.\n",chr);
    }
    else if (chr >= '0' && chr <= '9')
    {
        printf("Entered Character: %c is a Number.\n",chr);
    }
    else /*Any other special character*/
    {
        printf("Entered Character: %c is a Special Character.\n",chr);
    }

    return 0;
}
