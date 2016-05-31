/*
// Calculating prime factors of a number.
// Time Complexity: O(sqrt(n))

#include <stdio.h>
#include <math.h>

void main()
{
    int num,i;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num<2)
    {
        printf("Invalid Input. Please try a different number!");
    }
    else
    {
        printf("\nPrime factors of %d are: ", num);
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                int count = 0;
                while (num % i == 0)
                {
                    num /= i;
                    count++;
                }
                printf("%d^%d ", i, count);
            }
        }
        if (num != 1)
        {
            printf("%d^1", num);                 // if any, there will be only one more prime factor of "num" greater than its square root. // This is maths and therefore, true for all numbers.
        }
    }
}
*/
