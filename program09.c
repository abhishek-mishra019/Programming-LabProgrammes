/* Write a program to generate sum of series 1!+2!+3!+ n! */
#include <stdio.h>
long long int fact(int num){
    long long factorial=num;
    while(num>1){
        factorial*=num-1;
         num-=1;
    }
    return factorial;
}
void main(){
    long long int n, sum=0;
    printf("Enter the number of terms 'n' in the series: ");
    scanf("%lld", &n);

    for(long long int i=1; i<=n; i++){
        sum+=fact(i);
    }
    
    printf("the sum of the series 1! + 2! + 3! +..... + n! is: %lld", sum);

}