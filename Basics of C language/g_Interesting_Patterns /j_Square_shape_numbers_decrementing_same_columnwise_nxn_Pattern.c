/* Square shape numbers decrementing same number columnwise
  Pattern is   5 4 3 2 1
               5 4 3 2 1
               5 4 3 2 1
               5 4 3 2 1
               5 4 3 2 1 
*/
#include <stdio.h>
int main()
{
    int n;
    
    printf("Enter the number of rows \n");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++ )
    {
        for(int j = n; j>0; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
