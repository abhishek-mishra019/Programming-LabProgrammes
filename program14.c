/* Write a program to receive a five-digit no and display as like
24689:
2
4
6
8
9 */
#include <stdio.h>
void main(){
    int n,reverse=0;
    printf("Enter a number to print its digits: ");
    scanf("%d",&n);
    // making the reverse of the input number
    while(n!=0){
        int a=n%10;
        reverse=reverse*10+a;
        n/=10; 
    }
    // printing the digits of reversed number right to left
    while (reverse!=0)
    {
        int a=reverse%10;
        printf("%d\n",a);
        reverse/=10;
    }
}