#include<stdio.h>
int armstrong (int n){
    int temp=n, sum=0, rem;
    while (temp>0){
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;                        
    }
    return (sum==n);
}
int main (){
    int n;
    scanf("%d",&n);
    if(armstrong(n))
    printf("Armstrong");
    else 
    printf("Not Armstrong");
    return 0;
}