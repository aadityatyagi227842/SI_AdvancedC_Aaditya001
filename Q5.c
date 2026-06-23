#include <stdio.h>
void main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("Temperature in Fahrenheit = %.2f\n",fahrenheit);
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("Temperature in Celsius = %.2f\n",celsius);

}
