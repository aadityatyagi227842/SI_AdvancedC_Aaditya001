//Write a program to take input from the user as number of rows and print a pyramid upto twice the input.
#include <stdio.h>
int main()
 {
    int input_rows,total_rows;
        printf("Enter the number of rows: ");
        scanf("%d",&input_rows);
    if (input_rows <1 || input_rows <= 0)
    {
        printf("Please enter a valid positive integer\n");
        return 1;
    }
    total_rows=2*input_rows;
    for (int i=1;i<=total_rows;i++) {
        int stars=(i<=input_rows)?i:(total_rows-i+1);
        int spaces = input_rows - stars;
        for (int j=1;j<=spaces;j++) {
            printf(" ");
        }
        for(int k=1;k<=stars;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
