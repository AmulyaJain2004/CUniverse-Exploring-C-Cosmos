/* Right Triangle left aligned row increasing and number incrementing at each iteration
  Pattern when n=5 is  1 
                       2 3 
                       4 5 6 
                       7 8 9 10
                       11 12 13 14 15 */

#include <stdio.h>
int main()
{
    int n,
    a=1; //starting number
    
    printf("Enter the number of rows \n");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++ )
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}
