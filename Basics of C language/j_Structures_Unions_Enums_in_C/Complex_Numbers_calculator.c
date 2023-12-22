#include <stdio.h>
#include <math.h>

typedef struct complex_num
{
    int real;
    int imaginary;
    // complex number = (real) + i(imaginary)
} cn;

int add(cn a, cn b)
{
    printf("Adding Two Complex Numbers, we get: -\n");
    printf("real_part imaginary_part of sum = %d %d\n", (a.real + b.real), (a.imaginary + b.imaginary));
    return 0;
}

int subtract(cn a, cn b)
{
    printf("Subtracting Two Complex Numbers, we get: -\n");
    printf("real_part imaginary_part of difference = %d %d\n", (a.real - b.real), (a.imaginary - b.imaginary));
    return 0;
}

int multiply(cn a, cn b)
{
    printf("Multiply Two Complex Numbers, we get: -\n");
    printf("real_part imaginary_part of product = %d %d\n", (a.real * b.real) - (a.imaginary * b.imaginary), (a.imaginary * b.real) + (a.real * b.imaginary));
    return 0;
}

int square (int a)
{
    return a*a;
}

int modulus (cn a)
{
    printf("Modulus of complex number = %0.2lf\n", sqrt((double)(square(a.real)+ square(a.imaginary))));
    return 0;
}

int amplitude(cn a)
{
    double m = atan(((double)a.imaginary)/(a.real));
    printf("Amplitude of complex number = %0.2lf\n",m);
    return 0;
}

int main()
{
    cn num1, num2;
    printf("Enter the real and imaginary part of first complex number: ");
    scanf("%d %d", &num1.real, &num1.imaginary);

    printf("Enter the real and imaginary part of second complex number: ");
    scanf("%d %d", &num2.real, &num2.imaginary);

    int choice;
    printf("Choose one of following operations to perform: -\n");
    printf("Enter 1 to add the two complex numbers\n");
    printf("Enter 2 to subtract the two complex numbers\n");
    printf("Enter 3 to multiply the two complex numbers\n");
    printf("Enter 4 to modulus of the two complex numbers\n");
    printf("Enter 5 to find the argument or amplitude of the two complex numbers\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Adding: -\n");
        add(num1, num2);
        break;

    case 2:
        printf("Subtracting: -\n");
        subtract(num1, num2);
        break;

    case 3:
        printf("Multiplying: -\n");
        multiply(num1, num2);
        break;

    case 4:
        printf("Modulus of first complex number: -\n");
        modulus(num1);
        printf("Modulus of second complex number: -\n");
        modulus(num2);
        break;

    case 5:
        printf("Amplitude of first complex number: -\n");
        amplitude(num1);
        printf("Amplitude of second complex number: -\n");
        amplitude(num2);
        break;

    default:
        printf("You have entered wrong choice!!\n");
    }
    
    return 0;
}
