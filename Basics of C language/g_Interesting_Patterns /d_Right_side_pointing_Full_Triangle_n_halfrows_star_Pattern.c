/*Right Side pointing Full Triangle Pattern for general, n for which total rows are (2n-1) is: * 
                                                                                               * *
                                                                                               * * * 
                                                                                               * * * * 
                                                                                               * * * * * 
                                                                                               * * * *
                                                                                               * * *
                                                                                               * *
                                                                                               *        
*/
#include <stdio.h>
int main()
{
    int n;
    
    printf("Enter the half number of rows to show pattern of Right Side pointing Full Triangle: -\n");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = (n-1); i>0; i-- )
    {
        for(int j = 1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
