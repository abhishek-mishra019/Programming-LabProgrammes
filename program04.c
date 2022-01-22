//  Write a program to find the largest of three numbers using nested if else. 
#include <stdio.h>

void main(){
    int a, b, c, max;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    // check if num1 is largest
    if (a>=b)
    {
        if (a>c)
        {
            max=a;      
        }
        else{
            max=c;   //else case is num3 is largest
        }
    }
    // check if num2 is largest
    else if (b>=a)
    {
        if (b>=c)
        {
            max=b;
        }
        else{
            max=c; // else case is num3 is largest
        }
        
    }
    printf("The maximum is %d", max);
}