/*Pattern for n=4 is           1
                              212
                             32123
                            4321234
                             32123
                              212
                               1*/
#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number for half number of rows: -\n");
    scanf("%d",&n);

    for (int i= 0; i<n; i++)
    {
        for (int j = n-i-1; j>0; j--)
        {
            printf(" ");
        }
        for (int j =i+1; j>1; j--)
        {
            printf("%d",j);
        }
        for (int j=1; j<=i+1; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    for (int i= n-1; i>0; i--)
    {
        for (int j = n-i; j>0; j--)
        {
            printf(" ");
        }
        for (int j =i; j>1; j--)
        {
            printf("%d",j);
        }
        for (int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
