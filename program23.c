/*Write a program to convert decimal number in to binary number.*/

#include <stdio.h>

void main(void) 
{
    int reverseBin[10], number;
    int i=9;
    printf("Enter a decimal number : ");
    scanf("%d", &number);
    
    while(number)
    {
        reverseBin[i] = number % 2;
        number = number / 2;
        i--;
    }

    printf("The binary conversion of given number is : ");

    for(int j=i+1; j<10; j++)
    {
      printf("%d", reverseBin[j]);
    }
}