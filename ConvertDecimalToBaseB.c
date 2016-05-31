/*
// Converting any decimal number to a number of base 'b'.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, base, number, remainder, i = 0, j,k;
    int *A = (int *)calloc(100,sizeof(int));
    for (k=0;k<100;k++)
    {
        A[k] = -1;
    }
    printf("Enter the decimal number: ");
    scanf("%d", &num);
    printf("\nEnter the base: ");
    scanf("%d", &base);
    number = num;
    while (num > 0)
    {
        remainder = num % base;
        A[i] = remainder;
        i++;
        num /= base;
    }
    printf("\nDecimal number, %d in base %d = ", number, base);
    for (j = 99; j >= 0; j--)
    {
        if (A[j] != (-1))
        {
            printf("%d", A[j]);
        }
    }
}
*/