#include <stdio.h>

int main()  
{  
    int i, n, n1, s1 = 0, j;
    long int fact; 

    printf("Enter a number to check whether it is Strong number: ");  
    scanf("%d", &n); 


    for (j = n; j > 0; j = j / 10) 
    {  
        fact = 1;
        for (i = 1; i <= j % 10; i++)  
        {  
            fact = fact * i;  
        }  
        s1 += fact;  
    }  

    if (s1 == n)  
    {  
        printf("\n%d is Strong number.", n); 
    }  
    else  
    {  
        printf("\n%d is not Strong number.", n); 
    } 

    return 0; 
}
