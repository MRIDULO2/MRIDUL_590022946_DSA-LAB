
//Q3) Write a C program to find the maximum and minimum element of an array.
#include <stdio.h>

void main(){
    int n, i;
    int a[100];
    int max, min;

    printf("Enter the number of elements- ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    max=a[0], min=a[0];

    for(i = 1; i < n; i++){
        if(a[i]>max)
            max = a[i];

        if(a[i]<min)
            min = a[i];
    }

    printf("\nArray: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\nMaximum element = %d", max);
    printf("\nMinimum element = %d", min);

}

