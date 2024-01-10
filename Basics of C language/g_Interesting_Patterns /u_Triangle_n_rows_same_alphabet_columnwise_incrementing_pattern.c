/* Traingle alphabet same columnwise incrementing Pattern
  Pattern is   A
               A B
               A B C
               A B C D
               A B C D E */

#include <stdio.h>
int main()
{
    int n;
    char ch =64;
    
    printf("Enter the number of rows \n");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++ )
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%c ",ch + j);
        }
        printf("\n");
    }
    return 0;
}
