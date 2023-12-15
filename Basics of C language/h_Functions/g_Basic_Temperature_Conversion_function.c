#include <stdio.h>
float temp_conv (float fahr)
{
    float cel = (fahr -32)*(5.0/9.0);
    return cel;
}

float temp_conv (float);

int main()
{
    float f;

    printf("Enter the Temperature in Fahrenheit for coversion in Celsius: - \n");
    scanf("%f",&f);

    float c = temp_conv(f);

    printf("The Temperature in Celsius: - %f", c);
    return 0;
}
