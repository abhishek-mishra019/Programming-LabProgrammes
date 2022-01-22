/* Write a program to find the value of y for a particular value of n.
 The a, x, b, n is input by user
if n=1 y=ax%b
if n=2 y=ax2+b2
if n=3 y=a-bx
if n=4 y=a+x/b  */
#include <stdio.h>
#include <math.h>

void main(){
    int a, x, b ,n, y;
    printf("Enter a, x, b and n respectively: ");
    scanf("%d %d %d %d", &a, &x, &b, &n);
    switch (n)
    {               //using switch case.
    case 1:
        y=(a*x)%b;
        break;
    
    case 2:
        y=(a*x*x)+b*b;
        break;
    case 3:
        y=a-(b*x);
        break;
    case 4:
        y=a+(x/b);
        break; 
    }
    printf("The result is : %d", y);


}
