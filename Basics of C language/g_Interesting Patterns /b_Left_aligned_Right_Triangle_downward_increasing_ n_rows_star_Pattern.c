/* Left aligned Right Triangle (downward increasing) Pattern for n=5 is:  *  
                                                                          * *
                                                                          * * * 
                                                                          * * * * 
                                                                          * * * * *  
*/
#include <stdio.h>
int main()
{
    int row;
    
    printf("Enter the number of rows for Left aligned Right Triangle (downward increasing) Pattern: -\n");
    scanf("%d",&row);

    for (int i = 1; i<=row; i++ )
    {
        for(int j = 1; j<=row; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
