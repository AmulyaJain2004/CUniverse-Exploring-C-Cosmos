/*bisectin method*/
#include <stdio.h>
#include <math.h>

float f(float x) {
    return 10 - x*x;
}

void bisect(float *x, float a, float b, int *itr) {
    *x = (a + b) / 2;
    ++(*itr);
    printf("Iteration no. %3d X = %7.5f\n", *itr, *x);
}

int main() {
    int itr = 0, maxitr;
    float x, a, b, x1, aerr;

    printf("Enter the initial interval [a, b], allowed error, and maximum iterations: -\n");
    if (scanf("%f %f %f %d", &a, &b, &aerr, &maxitr) != 4) {
        printf("Invalid input. Please enter valid values.\n");
        return 1;
    }

    if (f(a) * f(b) > 0) {
        printf("Invalid initial interval. Ensure f(a) and f(b) have opposite signs.\n");
        return 1;
    }

    bisect(&x, a, b, &itr);

    do {
        printf("a = %7.5f, b = %7.5f, x = %7.5f f(a) = %7.5f, f(b) = %7.5f, f(x) = %7.5f\n\n", a, b, x, f(a), f(b), f(x));


        if (f(a) * f(x) < 0) {
            b = x;
        } else {
            a = x;
        }


        bisect(&x1, a, b, &itr);

        if (fabs(f(x1)) < aerr) {
            printf("After %d iterations, root = %6.4f\n", itr, x1);
            return 0;
        }
        x = x1;
    } while (itr < maxitr);

    printf("Solution does not converge, maximum iterations reached.\n");
    return 1;
}
