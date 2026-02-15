// 2. Write a C program to dynamically allocate memory for an array of integers, perform insertion, sum, average operations, and properly free allocated memory before program termination.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, pos;
    float sum = 0;
    int *arr;
    int val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);
    arr = (int *)realloc(arr, (n + 1) * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    sum += val;
    n++;
    printf("After Insertion:");
    for (i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
    printf("Sum = %d\n", (int)sum);
    printf("Average = %f\n", (float)sum / n);
    free(arr);
    return 0;
}
