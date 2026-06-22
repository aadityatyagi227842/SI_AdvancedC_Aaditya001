#include <stdio.h>
int main()
{
    int x_add = 10003;
    int size = 4;
    printf("Base Address of X = %d\n", x_add);
    printf("Size of each variable = %d bytes\n\n", size);
    printf("CASE 1 : X -> Y -> Z\n");
    printf("Address of X = %d\n", x_add);
    printf("Address of Y = %d\n", x_add + size);
    printf("Address of Z = %d\n\n", x_add + 2 * size);
    printf("CASE 2 : Z -> Y -> X\n");
    printf("Address of Z = %d\n", x_add - 2 * size);
    printf("Address of Y = %d\n", x_add - size);
    printf("Address of X = %d\n", x_add);
    return 0;
}
