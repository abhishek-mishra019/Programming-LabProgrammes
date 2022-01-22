/*Write a program to find sum of Fibonacci series using function. */
#include <stdio.h>

void main(){
    long long int a=1,b=1,n, c,sum;
    sum=a+b;
    printf("Enter the number of terms in the fibonacci series : ");
    scanf("%lld",&n);
    printf("The terms of the fibonacci series are : %lld %lld ", a, b);
    long long int flag=3;
    while (flag<=n){
        c=a+b;
        sum+=c;
        a=b;
        b=c;
        flag+=1;
        printf("%lld ",c);
    }
    
    printf("\nThe sum of the series is : %lld",sum);
}