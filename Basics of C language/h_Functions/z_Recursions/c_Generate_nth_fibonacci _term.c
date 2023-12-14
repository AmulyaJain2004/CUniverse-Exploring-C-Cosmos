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
    printf("Enter the number upto which nth term of fibonacci has to be created: -\n");
    scanf("%d",&n);
    
    Generate_nth_fibonacci(n);
    return 0;
}
