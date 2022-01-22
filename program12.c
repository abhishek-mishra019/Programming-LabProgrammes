#include <stdio.h>
#include <math.h>
void main(){
    int a=100;
    printf("The armstrong numbers between 100 and 500 are : ");
    while (a<=500){
        int temp=a, cubeSum=0;
        while(temp>0){
            cubeSum+=pow(temp%10,3);
            temp/=10;
        }
        if (cubeSum==a)
        {
            printf("%d ", a);
        }
        a+=1;
    }

}