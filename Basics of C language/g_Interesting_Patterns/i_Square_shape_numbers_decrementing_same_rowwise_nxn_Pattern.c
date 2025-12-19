/* Square shape numbers decrementing same rowwise
  Pattern for n=5 is   5 5 5 5 5
                       4 4 4 4 4
                       3 3 3 3 3
                       2 2 2 2 2
                       1 1 1 1 1 
*/
#include <stdio.h>
int main()
{
    int n;
    
    printf("Enter the number of rows \n");
    scanf("%d",&n);

    for (int i = n; i>0; i-- )
    {
        for(int j = 1; j<=n; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
