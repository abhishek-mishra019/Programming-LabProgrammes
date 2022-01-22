/*Write a program to print the entire prime no between 1 and 300. */
#include <stdio.h>
#include <math.h>
void main(){
    printf("The prime numbers between 1 and 300 are : 2, "); //two is the only even prime
    for( int n=3; n<=300; n+=2){ //traverse odd no. from 3 to 300 as other even arent prime
        int isprime=0;
        int i=2;
        while (i<(sqrt(n)+1))
        {
            if (n%i==0)
            {
                isprime=0;
               break; 
            }
            else{
                isprime=1;
                i+=1;
            }
            
        }
        if (isprime==1)
        {
            printf("%d, ", n);
        }
        
    }

}