/*Write a program to find the factorial of given number using recursion. */
#include <stdio.h>

long long int factRec(int n){
    if (n==1)
    {   
        return 1;
      
    }
    else{
        return n*factRec(n-1);
    }
}
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The factorial of the given number is %lld",factRec(num));

}