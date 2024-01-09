#include <stdio.h>
int main()
{
    int choice;
    printf("Enter 1: To print all the ASCII values and their equivalent characters. \nEnter 2: To close the program.\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int ch = 0;
        while (ch <= 255)
        {
            printf("%d ---> %c\n", ch, ch);
            ch++;
        }
    }
    else
    {
        printf("Ending the program\n");
        return 0;
    }
    return 0;
}
