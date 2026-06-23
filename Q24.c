#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp, original, digits = 0;
    int rem;
    long sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    temp = num;
    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = num;
    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }

    if(sum == original)
        printf("%d is an Armstrong Number", original);
    else
        printf("%d is not an Armstrong Number", original);
    return 0;
}
