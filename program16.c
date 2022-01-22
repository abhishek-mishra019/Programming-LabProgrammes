/*Write a program to print area of rectangle using function & return its value to main
function.*/ 
#include <stdio.h>
int areaCalculation(int l ,int b){     //delaring the function for calculating the area
    int Area=l*b;
    return Area;
}



void main(){
    int length,breadth,areaRectangle;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);
    areaRectangle=areaCalculation(length,breadth);    //function calling
    printf("The area of the rectangle is %d sq. units",areaRectangle);
}