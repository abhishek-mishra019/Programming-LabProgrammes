/* Write a program to construct a Fibonacci series upto n term */
#include <stdio.h>

void main(){
    long long int a=1, b=1,c, n;
    printf("Enter the no. of terms: ");
    scanf("%lld", &n);
    printf("%lld %lld ",a, b);

    // using for loop to print 3rd to nth term
    for( int i=3; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
        printf("%lld  ",c);
    }
}