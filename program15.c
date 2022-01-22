/*Write a function that return sum of all the odd digits of a given positive no 
entered through keyboard.*/
#include <stdio.h>
int oddSum(int n){      //function declaring for calculating sum of odd digits
    int sum=0;
    while (n>0){
        int a = n%10;
        n/=10;
        if (a%2!=0)
        {
            sum+=a;
        }
    }
    return sum;
}
void main(){
    int num,sumOfOddDigits;
    printf("Enter a number: ");
    scanf("%d",&num);
    sumOfOddDigits=oddSum(num);   //function calling
    printf("The sum of odd digits is : %d",sumOfOddDigits);

}