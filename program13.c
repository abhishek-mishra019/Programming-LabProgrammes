/*Write a program to draw the following figure:
3 2 1
2 1
1
*
* *
* * *    */
#include <stdio.h>

void main(){
    for (int i=3; i>=1; i--){
        for( int j=i; j>=1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    for (int a = 1; a<=3; a++)
    {
        for (int b = 1; b<=a; b++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}