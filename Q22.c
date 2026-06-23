#include <stdio.h>
int main()
{
    int n, i, j, flag;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Prime Numbers between 1 and %d are:\n", n);
    for(i = 2; i <= n; i++)
    {
        flag = 1;
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
