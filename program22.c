/*Write a program to calculate the GCD of given numbers using recursion*/
#include <stdio.h>

int GCDrec(int n1,int n2){    //Declaring recursion function
    if (n1==0){
        return n2;
    }
    else if(n2==0){
        return n1;
    }
    // else{
    //     if (n1>n2){
    //         return GCDrec(n1-n2,n2);
    //     }
    //     else {
    //         return GCDrec(n1,n2-n1);
    //     }
    // }
    else{
        return GCDrec(n2,n1%n2); //recursion
    }
}



void main(){
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1, &num2);

    printf("Hcf is %d", GCDrec(num1,num2)); //function calling 

}