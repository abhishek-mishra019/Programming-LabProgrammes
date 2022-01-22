/*Basic salary of an employee is input through the keyboard The DA is 25% of the basic
salary while the HRA is 15% of the basic salary. Provident Fund is deducted at the rate
of 10% of the gross salary (BS+DA+HRA). Program to calculate the net salary.*/
#include <stdio.h>

void main(){
float basicSalary, DA, HRA, PF, grossSalary, netSalary;
printf("Enter the basic Salary : ");
scanf("%f", &basicSalary);
DA=basicSalary*0.25;
HRA=basicSalary*0.15;
grossSalary=basicSalary+DA+HRA;
PF=grossSalary*0.10;
netSalary=grossSalary-PF;

printf("The net salary of the employee is : %f",netSalary);
}