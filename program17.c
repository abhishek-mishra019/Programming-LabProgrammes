/*Write a program to calculate the factorial for given number using function. */
#include <stdio.h>
long long int fact(long long int n){
    long long int factorial=n;
    while (n>1)
    {
        factorial*=n-1;
        n-=1;
    }
    return factorial;
}
void main(){   
    long long int n,factorial;
    printf("Enter a number : ");
    scanf("%lld", &n);
    factorial=fact(n);
    printf("The factorial of the given number is : %lld", factorial);
}