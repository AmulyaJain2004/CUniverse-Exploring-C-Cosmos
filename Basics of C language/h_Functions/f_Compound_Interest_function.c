#include <stdio.h>
#include <math.h>

float comp_intr(float p, float r, int n, float t)
{
    double temp = (1+(r/(100*n)));
    int x = (n*t);
    double am = pow(temp,x);
    float ci = (am-1)*p ;
    return ci;
}

float comp_intr (float, float, int, float);

int main()
{
    float pr, rt, ti;
    int fr;

    printf("Enter the principal: - \n");
    scanf("%f",&pr);
    printf("Enter the rate:- \n");
    scanf("%f",&rt);
    printf("Enter the frequency:- \n");
    scanf("%d",&fr);
    printf("Enter the time period: - \n");
    scanf("%f",&ti);

    float final = comp_intr (pr, rt, fr, ti);

    printf("Compound Interest is: %f",final);
    return 0;
}
