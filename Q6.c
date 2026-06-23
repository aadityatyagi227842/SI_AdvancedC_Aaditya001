#include <stdio.h>
#include <math.h>
void main()
{
    float P, R, T, SI, CI, Amount;
    printf("Enter Principal Amount: ");
    scanf("%f", &P);
    printf("Enter Rate of Interest: ");
    scanf("%f", &R);
    printf("Enter Time (in years): ");
    scanf("%f",&T);
    SI = (P * R * T) / 100;
    Amount=P*pow((1+R/100),T);
    CI=Amount -P;
    printf("\n Simple Interest = %2f",SI);
    printf("\n Compound Interest = %2f",CI);
}
