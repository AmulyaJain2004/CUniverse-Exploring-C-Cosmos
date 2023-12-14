#include <stdio.h>
int Generate_Natural_num(int a)
{
    if(a==0)
    {
        return 0;
    }
    printf("%d ", a);
    return Generate_Natural_num(a-1);
}
int main()
{
    int n;
    printf("Enter the number upto which natural numbers has to be printed: -\n");
    scanf("%d",&n);
    Generate_Natural_num(n);
    return 0;
}
