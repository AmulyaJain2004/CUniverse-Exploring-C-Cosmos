#include <stdio.h>
#include "interest.h"

int main()
{
    int p,n;
    float si, amt, r;
    printf("\nEnter Principal, no. of years and rate of interest: ");
    scanf("%d %d %f",&p,&n,&r);
    si = SI(p,n,r);
    amt = AMT (p,si);
    printf("Simple interest is %d\nAmount is %.1f\n",si,amt);
    return 0;
}
