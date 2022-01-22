/*Write a program to calculate the area of triangle using formula at=√s(s- a)(s-b)(s-c)  */

#include <math.h>
#include <stdio.h>

void main(){
float a,b,c,s,area;
printf("enter the sides of the triangle: ");
scanf("%f %f %f", &a, &b, &c);

s=(a+b+c)/2;

area= sqrt(s*(s-a)*(s-b)*(s-c));

printf("the area of the triangle is: %f", area);
}