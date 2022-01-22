/* Write a program to find the sum of digits of a 5 digit number using recursion. */
#include <stdio.h>
long long int sumRec(long long int n){
    if (n>0)
    {
        return n%10+sumRec(n/10);
    }
}
void main(){
    long long int num, sum;
    printf("Enter a number : ");
    scanf("%lld",&num);
    printf("The sum of digits of the number is : %lld",sumRec(num));

}