/*
// Greatest common divisor of two numbers using Euclid's Algorithm.
// Time Complexity: O(log(b)), b is the smaller number of the two input numbers.

#include <stdio.h>

int euclid_gcd(int a, int b)
{
    int dividend = a;                           // In case a<b, after one loop in the while block, dividend will be 'b' and divisor will be 'a'.
    int divisor = b;                            // loop executes one more time in the case where b>a.
    while(divisor != 0)
    {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;
}

void main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    int gcd = euclid_gcd(a,b);
    printf("GCD of %d and %d = %d",a,b,gcd);
}




// Recursive function for calculating GCD

//      int euclid_gcd_recursive(int a, int b)
//      {
//          return b == 0 ? a : euclid_gcd_recursive(b, a%b);
//      }

//      Time & Space Complexity: O(log(b)), b is the smaller number of the two input numbers.
*/
