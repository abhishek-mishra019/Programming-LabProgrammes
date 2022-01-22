/* Write a program to find whether the number is Armstrong number.*/
#include <stdio.h>
#include <math.h>

void main(){
    long long int num,n, cubeSum=0;
    printf("Enter a number : ");
    scanf("%lld", &num);
    n=num;
    while (n>0)
    {
        cubeSum+=pow(n%10,3);
        n/=10;
    }
    if (cubeSum==num)
    {
        printf("This is an Armstrong number");
    }
    else{
        printf("This is not an armstrong number");
    }
}