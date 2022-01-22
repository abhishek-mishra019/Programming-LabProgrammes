/* Write a program to receive marks of physics, chemistry & maths from user & check its
eligibility for course if 
a) Marks of physics > 40 b) Marks of chemistry > 50 c) Marks of math’s > 60
d) Total of physics & math’s marks > 150 or e) Total of three subjects marks > 200 */

#include <stdio.h>

void main(){
    int phyMarks, cheMarks, mathMarks, phyMathSum, total;
    printf("Enter Physics marks out of 100: ");
    scanf("%d",&phyMarks);
    printf("Enter Chemistry Marks out of 100: ");
    scanf("%d", &cheMarks);
    printf("Enter Maths marks out of 100: ");
    scanf("%d", &mathMarks);
    
    phyMathSum=phyMarks+mathMarks;
    total=phyMarks+mathMarks+cheMarks;

    // checking eligibility for course
    if (phyMarks>40 && cheMarks>50 && mathMarks>60 && (phyMathSum>150 || total >200) )
    {
        printf("Congrats,You are Eligible for the Course");
    }
    else{
        printf("Sorry, you are not eligible for the course");
    }

}