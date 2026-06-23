#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, root1, root2;
    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if(d == 0)
    {
        root1 = -b / (2 * a);
        printf("Both roots are equal.\n");
        printf("Root = %.2f", root1);
    }
    else
    {
        printf("Roots are imaginary (complex).");
    }
}
