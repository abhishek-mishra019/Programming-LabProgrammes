/*Write a program to find the sum of following series 1-X1/1!+X2/2!-…………Xn/n!. */
#include <stdio.h>
#include <math.h>

long long int fact(int num){       //making a seperate function for calculationg factorial
    long long factorial=num;
    while(num>1){
        factorial*=num-1;
         num-=1;
    }
    return factorial;
}
void main(){
    long long int n, x, p,f, sum=1, i=1;
    printf("Enter the value of x and n: ");
    scanf("%lld %lld", &x, &n);
    while (i<=n)
    {
        p=pow(x,i);
        f=fact(i);  
        if (i%2==0)
        {
            sum+=p/f;
        }
        else{
            sum-=p/f;
        }
        i+=1;
    
    }
    printf("The sum of the series 1-x/1! + x^2/2!- x^3/3!.....is %lld\n",sum);
 

}