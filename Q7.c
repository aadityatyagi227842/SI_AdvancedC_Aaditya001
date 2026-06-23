#include <stdio.h>
void main()
{
    float radius, area, circumference;
    float pi = 3.14159;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of Circle = %2f\n", area);
    printf("Circumference of Circle = %2f\n", circumference);
}
