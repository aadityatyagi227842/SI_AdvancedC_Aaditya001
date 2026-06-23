#include <stdio.h>
void main()
{
    int a;
    float b;
    char c;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("\nInteger = %d", a);
    printf("\nFloat = %.2f", b);
    printf("\nCharacter = %c", c);
}
