#include <stdio.h>
int main()
{
    int n,a,b,l,r,x,y,f,g;

    printf("Enter from following number to calculate the corresponding Area of 2D figure of your choice: - \n");
    printf("1: To calculate Area of Rectangle \n");
    printf("2: To calculate Area of Square \n");
    printf("3: To calculate Area of Circle \n");
    printf("4: To calculate Area of Parallelogram \n");
    printf("5: To calculate Area of Triangle \n");

    scanf("%d", &n);

    if ((n > 0) && (n < 6))
    {

        switch (n)
        {
        case 1:
            

            printf("Enter the value of length of Rectangle \n");
            scanf("%d", &a);
            printf("Enter the value of breadth of Rectangle \n");
            scanf("%d", &b);

            printf("Area of Rectangle is: - \n");
            printf("%d", (a * b));

            break;

        case 2:
            

            printf("Enter the value of length of Square \n");
            scanf("%d", &l);

            printf("Area of Square is: - \n");
            printf("%d", (l * l));

            break;

        case 3:
            

            printf("Enter the value of Radius of Circle \n");
            scanf("%d", &r);

            printf("Area of Circle is: - \n");
            printf("%f", (((3.14) * r) * r));

            break;

        case 4:
            

            printf("Enter the value of base of Parallelogram \n");
            scanf("%d", &x);
            printf("Enter the value of height of Parallelogram \n");
            scanf("%d", &y);

            printf("Area of Paralleogram is: - \n");
            printf("%d", (x * y));

            break;

        case 5:
            

            printf("Enter the value of base of Triangle \n");
            scanf("%d", &f);
            printf("Enter the value of height of Triangle \n");
            scanf("%d", &g);

            printf("Area of Triangle is: - \n");
            printf("%f", (((0.5) * f) * g));

            break;

        default:
            break;
        }
    }

    else
    {
        printf("Enter a valid number from above !!");
    }

    return 0;
}
