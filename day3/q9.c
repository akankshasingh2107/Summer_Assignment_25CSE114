#include<stdio.h>
int main() {
    int num,i,flag=1;   
    printf("Enter a number:");
    scanf("%d",&num);
    if (num<=1) {
       flag=0;
    }
    for (i=2;i<num;i++) {
        if (num%i==0) {
            flag=0;
            break;
        }
    }
    if (flag) 
        printf("The given number is a prime number.");
    else 
        printf("The given number is not a prime number.");
    return 0;
}