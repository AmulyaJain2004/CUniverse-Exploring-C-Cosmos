#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year to check whether it is Leap Year or not: -\n");
    scanf("%d",&year);

    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                printf("Entered year: %d is a Leap Year.\n",year);
            }
            else 
            {
                printf("Entered year: %d is not a Leap Year.\n",year);
            }
        }
        else
        {
            printf("Entered year: %d is a Leap Year.\n",year);
        }
    }
    else
    {
        printf("Entered year: %d is not a Leap Year.\n",year);
    }
    return 0;
}
