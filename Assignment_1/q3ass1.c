// 3. Write a C program to dynamically allocate an array and find the largest and smallest element.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("Smallest = %d\n", min);
    printf("Largest = %d\n", max);
    free(arr);
    return 0;
}
