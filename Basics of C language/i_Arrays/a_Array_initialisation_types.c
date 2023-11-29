#include <stdio.h>
int main()
{   
    // Basic initailization 
    int num1[5]={3,7,12,24,45};
    // in memory in num1 array of 5 elements will be stored like 3,7,12,24,45

    // initailization without Size
    int num2[]={3,7,12,24,45};
    // in memory in num2 array of 5 elements will be stored like 3,7,12,24,45 but here number of elements/or size is not mentioned.
    // generally useful when counting is not possible in case of strings, long sized arrays, etc.

    // Partial initialization
    int num3[5]={3,7};
    // in memory in num1 array of 5 elements will be stored like 3,7,0,0,0.

    // intialization to all zeros
    int num4[200] = {0};
    // in memory in num1 array of 200 elements will be stored like 0,0,0,0,.....till 200th element. 
    // All initialized with zeros useful in performing operations on arrays and prevents garbage values.

    return 0;
}
