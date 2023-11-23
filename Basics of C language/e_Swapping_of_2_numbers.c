#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the first number: - \n");
    scanf("%d",&a);
    printf("enter the second number: - \n");
    scanf("%d",&b);

    //method 1
    //without using 3rd variable
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    //method 2
    // using 3rd variable
    
    // c=a+b;
    // a=c-a;
    // b=c-b;
    
    // or
    // c=a;
    // a=b;
    // b=c;

    printf("on swapping the 2 numbers, the value of first number is %d and the value of second number is %d",a,b);
    return 0;
}
