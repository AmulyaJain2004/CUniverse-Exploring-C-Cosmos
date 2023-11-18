#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d;
    printf("Consider a Quadratic Equation of the form: ax^2 + bx + c = 0 \n");
    printf("Put the value of a \n");
    scanf("%f", &a);
    printf("Put the value of b \n");
    scanf("%f", &b);
    printf("Put the value of c \n");
    scanf("%f", &c);

    d = (b * b) - (4 * (a * c));
    printf("The value of Discriminant, D = %f \n", d);

    if (d > 0)
    {
        printf("Roots of this Quadratic Equation %fx^2 + %fx + %f = 0 are Real and Distinct. \n", a, b, c);
        printf("Now, Roots of this equation are %f & %f \n", ((-b + (sqrt(d))) / (a * 2)), ((-b - (sqrt(d))) / (a * 2)));
    }
    else if (d == 0)
    {
        printf("Roots of this Quadratic Equation %fx^2 + %fx + %f = 0 are Real and Equal.", a, b, c);
        printf("Now, Roots of this equation are %f & %f \n", (-b / (a * 2)), (-b / (a * 2)));
    }
    else
    {
        printf("Roots of this Quadratic Equation %fx^2 + %fx + %f = 0 are Imaginary and Conjugate of each other.", a, b, c);
    }
    return 0;
}
