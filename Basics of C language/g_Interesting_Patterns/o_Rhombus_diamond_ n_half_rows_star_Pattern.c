/* Pattern for n=4 is   
                   *
                  ***
                 *****
                *******
                 *****  
                  ***
                   *     */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of half Rows to show pattern of diamond or rhombus with total rows = 2*halfrows -1: - \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= (n - i); k++)
        {
            printf(" ");
        }
        for (int j = ((2 * i) - 1); j > 0; j--)
        {
            printf("*");
        }
        for (int k = 1; k <= (n - i); k++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for (int i = (n - 1); i > 0; i--)
    {
        for (int k = (n - i); k > 0; k--)
        {
            printf(" ");
        }
        for (int j = ((2 * i) - 1); j > 0; j--)
        {
            printf("*");
        }
        for (int k = (n - i - 1); k > 0; k--)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
