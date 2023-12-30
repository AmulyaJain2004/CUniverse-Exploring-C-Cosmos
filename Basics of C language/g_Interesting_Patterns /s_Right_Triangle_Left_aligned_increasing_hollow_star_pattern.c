/* Right Triangle Left aligned increasing Hollow star pattern
  Pattern  for n=5 is   * 
                        * * 
                        *   *
                        *     *
                        * * * * *  */

#include <stdio.h>
int main()
{
    int n;
    
    printf("Enter the number of rows \n");
    scanf("%d",&n);

    for (int i = 1; i<=n ; i++ )
    {
        for(int j = 1; j<=i; j++)
        {
            if ((i==n)||(j==1)||(j==i))
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
