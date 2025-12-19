/*Left Side pointing Full Triangle Pattern for general, n for which total rows are (2n-1) is:       *
                                                                                                  * *
                                                                                                * * *
                                                                                              * * * *
                                                                                                * * *  
                                                                                                  * *
                                                                                                    *     
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of half Rows to show pattern of Left Side pointing Full Triangle: - \n");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++ )
    {
        for(int j = 1; j <= (n-i+1); j++)
        {
            printf("  ");
        }
        for(int j = 1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = (n - 1); i > 0; i--)
    {
        for(int j = 1; j <= (n-i+1); j++)
        {
            printf("  ");
        }
        for(int j = 1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
