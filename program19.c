/* Write factorial function & use the function to find the sum of series S=1!+2!+ n!.  */
#include <stdio.h>
long long int fact(int num){
    long long factorial=1;
    while(num>=1){
        factorial*=num;
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