#include<stdio.h>
int main()
{
    int num,digit,product=1;
    printf("Enter a number:");
    scanf("%d",&num);
    while (num!=0)
    {
        digit=num%10;
        product=product*digit;
        num=num/10;
    }
    printf("The product of the digits in the given number is %d", product);
    return 0;
}