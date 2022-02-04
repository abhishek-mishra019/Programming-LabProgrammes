/*Write a program to convert decimal number in to binary number.*/

#include <stdio.h>
#include <math.h>

void main(){
    float num, decimalPart, binDec=0, binaryConversion;
    int integerPart,a,binInt=0,p1=0, p2=-1;
    
    printf("Enter a number : ");
    scanf("%f",&num);
    
    integerPart=num;
    decimalPart=num-integerPart;
    
    // binary conversion of the integer part
    while (integerPart !=0)
    {
        a=integerPart%2;
        binInt=binInt+pow(10,p1)*a;
        integerPart/=2;
        p1++;
    }

    // binary conversion of the decimal part
    while (p2> -4)
    {
      decimalPart=decimalPart*2;
      if (decimalPart<1)
      {
        binDec=binDec+pow(10,p2)*0;        
      }
      else if (decimalPart>=1){
        binDec=binDec+pow(10,p2)*1;
        decimalPart-=1;
      }
      p2--;
    }
    // overall binary conversion
    binaryConversion=binInt+binDec;    
    



    printf("The Binary conversion of the number is %.3f\n", binaryConversion);

}