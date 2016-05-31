/*
// Finding all prime numbers up to n numbers using Sieve of Eratosthenes method.
// Time complexity: O(n.loglog(n)). This is much better than the time complexity of trial division method: O(n.sqrt(n)).

#include<stdio.h>
#include<math.h>
//#include <stdlib.h>                                           // This is needed if dynamic array needs to be created for printing prime numbers of larger range. Dynamic memory allocated array (created on the heap) has much more capacity than a static memory allocated array (created on the stack).
//#include <time.h>                                             // This should be included if execution time of the algorithm is required.

void main()
{
    //clock_t begin, end;                                       // These 3 statements in the beginning and at the end of main() function are to check the actual execution time of the algorithm.
    //double time_spent;
    //begin = clock();

    int num, i,j,k;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num<2)
    {
        printf("No prime numbers");
    }
    else
    {
        int Primes[num+1];                                      // Static memory allocated array (created on stack).
        //int* Primes = (int*)malloc((num+1)*sizeof(int));      // Dynamic memory allocated array (created on heap).
        for (i = 0; i <= num; i++)
        {
            Primes[i] = 1;                                      // Consider all numbers initially to be prime. So set every index of the array as 1.
        }
        Primes[0] = 0;
        Primes[1] = 0;
        for (i = 2; i <=(sqrt(num)); i++)                       // Trial division method approach. A number will be prime, if it doesn't have a co-factor less than or equal to square root of itself. Theoretically, time complexity will remain exactly the same if "num" is used instead of "sqrt(num)" i.e. O(n.loglog(n)). But practically, using "sqrt(num)" slightly improves the time complexity. A good analogy is when using for loop till "num" and "num/2".
        {
            for (j = 2; i * j <=num; j++)
            {
                Primes[i * j] = 0;                              // Multiples of prime numbers can't be prime. So set them as 0. Time complexity of this algorithm is based on how many times this statement will execute based on the input: num.
            }
        }
        for (k = 0; k <= num; k++)
        {
            if (Primes[k] == 1)
            {
                printf("%d ", k);                               // Printing all the prime numbers by printing the indices of the array having value 1.
            }
        }
        //free(Primes);                                         // This statement is used when using dynamic array, to free up the memory block after its usage.
    }

    //end = clock();                                            // Statements for checking the execution time.
    //time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
    //printf("\nTime in seconds = %lf", time_spent);
}
*/
