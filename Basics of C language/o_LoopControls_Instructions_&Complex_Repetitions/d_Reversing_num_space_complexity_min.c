#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number to be reversed:- \n");
    scanf("%d",&n);

    printf("The reversed number is:- \n");
    for ( ; n ; )
    {
        printf("%d",(n%10));
        n/=10;
    }
    return 0;
}
