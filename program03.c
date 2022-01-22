// Write a program to determine the roots of quadratic equation.
#include <stdio.h>
#include <math.h>
 void main(){
    double a ,b, c , discriminant, root1, root2, realPart, imgPart;
    printf("Enter the coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    discriminant=b*b-4*a*c;

     // // condition for real and different roots
    if (discriminant>0)
    {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("The roots are %.2lf and %.2lf",root1, root2);
    }
    // condition for real and equal roots
    else if (discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("The roots are : %.2lf %.2lf", root1, root2);
    }
    // if roots are not real
    else{
        realPart=-b/(2*a);
        imgPart=sqrt(-discriminant)/(2*a);
        printf("the roots are %.2lf + %.2lf i and %.2lf - %.2lf i",realPart, imgPart, realPart, imgPart);
    }
    
    
 }