/*
// Finding all factors of a number.
// Time complexity: O{sqrt(n)}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int num,i,j=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int* A=(int*)calloc((int)(2*sqrt(num)+1), sizeof(int));
    for (i=1;i<=(int)sqrt(num);i++)
    {
        if (num%i==0)
        {
            A[j] = i;
            j++;
            if(i*i != num)                  // i != sqrt(num)
            {
                A[j] = num/i;
                j++;
            }
        }
    }
    for (j=0;A[j]!=0;j++)
    {
        printf("%d ",A[j]);                 //Printing the pair of co-factors
    }
}
*/
