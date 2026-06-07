#include <stdio.h>

int main()
{
    int x, n, result = 1;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%d raised to %d = %d", x, n, result);

    return 0;
}
