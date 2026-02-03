
// Write a C program to read n elements into an array and display the elements using a for loop.

#include <stdio.h>

void main() {
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Array:\n");
    i=0;
    while(i<n) {
        printf("%d ",a[i]);
        i++;
    }
}

