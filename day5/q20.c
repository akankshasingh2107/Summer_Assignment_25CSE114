#include <stdio.h>

int main()
{
    int num, i, largestPrime = 0, j, prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            prime = 1;

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if(prime)
            {
                largestPrime = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}