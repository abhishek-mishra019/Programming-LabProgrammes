/* Write a program to convert binary number in to decimal number. */

#include <stdio.h>
#include <math.h>

void main(){
    int binary,decimal=0, remainder,p=0;
    printf("Enter the binary number : ");
    scanf("%d",&binary);

    // conversion of binary to integer using while loop
    while(binary!=0){
        remainder=binary%10;
        decimal=decimal+pow(2,p)*remainder;
        p++;
        binary/=10;
    }
    printf("the decimal conversion of the number is : %d", decimal);
}