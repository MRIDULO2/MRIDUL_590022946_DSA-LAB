// 10. Write a C program using structure and dynamic memory allocation to sort student record based on marks.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student *s, temp;
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);
    s = (struct Student *)malloc(n * sizeof(struct Student));
    for (i = 0; i < n; i++) {
        printf("Student %d\n", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (s[j].marks < s[j + 1].marks) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("Students Sorted by Marks:\n");
    for (i = 0; i < n; i++) {
        printf("Roll: %d Name: %s Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    free(s);
    return 0;
}
