/*Upward pointing Full Triangle Pattern for n=5 is:        *
                                                         * * *
                                                       * * * * *
                                                     * * * * * * *
                                                   * * * * * * * * *  
*/
#include <stdio.h>
int main()
{
    int n;

    printf("Enter the row number to show Upward pointing Full Triangle Pattern: -\n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= (n - i); k++)
        {
            printf("  ");
        }
        for (int j = ((2 * i) - 1); j > 0; j--)
        {
            if ((j==((2 * i) - 1))||(j==1)||(i==n))
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
