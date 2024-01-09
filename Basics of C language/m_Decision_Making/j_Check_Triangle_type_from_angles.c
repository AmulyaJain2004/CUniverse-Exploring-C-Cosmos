#include <stdio.h>
int main()
{
    int a,b,c;

    printf("enter the value of angle a: - \n");
    scanf("%d",&a);
    printf("enter the value of angle b: - \n");
    scanf("%d",&b);
    
    c=(180-(a+b));

    if ((a==b)||(b==c)||(c==a))
    {
        printf("The Triangle is an Isosceles triangle.");
    }
    else if ((a!=b)&&(b!=c)&&(c!=a))
    {
        printf("The Triangle is a Scalene triangle.");
    }
    else if ((a==b)&&(b==c)&&(c==a))
    {
        printf("The Triangle is an Equilateral triangle.");
    };
    
    return 0;
}
