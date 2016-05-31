/*
// Modular Exponentiation
// Time: O(log n)
// Go through PowerOrExponent programs before this.

#include <stdio.h>

int modexp(int base, int power, int mod)
{
    int x;
    if (power==0)
        return 1;
    if (power%2==0)
    {
        x = modexp(base,power/2,mod);
        return (x*x)%mod;                                   // Same as return [(x%mod)*(x%mod)]%mod  // Property of associativity
    }
    else
        return ((base%mod)*modexp(base,power-1,mod))%mod;
}

void main()
{
    int base,power,mod,result;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);
    printf("Enter the modulus: ");
    scanf("%d", &mod);
    result  = modexp(base,power,mod);
    printf("Modular Exponentiation of the input data = %d", result);
}*/
