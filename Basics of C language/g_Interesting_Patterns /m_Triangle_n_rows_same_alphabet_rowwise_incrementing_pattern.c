/* Traingle same alphabet rowwise incrementing Pattern
  Pattern for n=5 is   A
                       B B
                       C C C
                       D D D D
                       E E E E E
*/
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
            printf("%c ",ch + i);
        }
        printf("\n");
    }
    return 0;
}
