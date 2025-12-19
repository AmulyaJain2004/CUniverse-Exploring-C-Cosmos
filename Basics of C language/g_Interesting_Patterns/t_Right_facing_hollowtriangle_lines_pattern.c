/* Right facing hollow triangle lines pattern 
  Pattern for n=5 is   |\ 
                       | \
                       |  \ 
                       |   \ 
                       |    > 
                       |   /
                       |  /
                       | /
                       |/      */
#include <stdio.h>
int main()
{
    int n;
    
    printf("Enter the number of rows \n");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            if ((i==n)&&(j==n))
            {
                printf(">");
            }
            if (i==1)
            {
                if (j==1)
                {
                    printf("|\\");
                }
                else
                {
                    printf(" ");
                }
            }
            if ((j==1))
            {
                if (i==1)
                {
                    printf(" ");
                }
                else
                {
                    printf("|");
                }
            }
            if ((j==i))
            {
                if ((i==n)||(i==1))
                {
                    printf(" ");
                }
                else 
                {
                    printf("\\");
                }
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = (n-1); i>0; i-- )
    {
        for(int j = 1; j<=i; j++)
        {
            if (i==1)
            {
                if (j==1)
                {
                    printf("|/");
                }
                else
                {
                    printf(" ");
                }
            }
            if ((j==1))
            {
                if (i==1)
                {
                    printf(" ");
                }
                else
                {
                    printf("|");
                }
            }
            if ((j==i))
            {
                if ((i==n)||(i==1))
                {
                    printf(" ");
                }
                else 
                {
                    printf("/");
                }
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
