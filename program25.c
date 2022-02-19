/* Write a program to delete duplicate element in a list of 10 elements & display it on screen. */
#include <stdio.h>

void main()
{
    int A[100], n;
    printf("Enter the number of elements in the Array : ");
    scanf("%d", &n);
    
    printf("Enter the elemtents of the array : ");  //taking array input
    for(int i=0; i<n; i++){
        scanf("%d",&A[i]);
    }

    //printing array before deleting duplicates
    printf("The elements of the array before deleting duplicate elements are : [ ");
     for(int i=0; i<n; i++){
         printf("%d, ",A[i]);
    }
    printf("\b\b ]");

    // logic for deleting duplicate elements
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++)
        {
            if (A[i]==A[j])
            {
                for (int k = j; k<n-1; k++)
                {
                    A[k]=A[k+1];
                }
                n=n-1;
                j=j-1;
            }
        }
    }

    // printing array after deleting duplicate elements
    printf("\nThe elements of the array after deleting duplicate elements are : [ ");
    for(int i=0; i<n; i++){
         printf("%d, ",A[i]);
    }
    printf("\b\b ]");
}