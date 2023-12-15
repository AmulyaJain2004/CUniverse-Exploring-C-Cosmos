#include <stdio.h>

int Generate_nth_fibonacci(int n)
{
    if (n>1)
    {
        return (Generate_nth_fibonacci(n-1)+Generate_nth_fibonacci(n-2));
    }
    else
    {
        return n;
    } 
}

int main()
{
    int n;
    printf("Enter the number upto which fibonacci series has to be generated: -\n");
    scanf("%d",&n);

    printf("The Fibonacci Series is: -\n");
    for (int i=0; i<n; i++)
    {
        printf("%d\t",Generate_nth_fibonacci(i));
    }
    
    return 0;
}
