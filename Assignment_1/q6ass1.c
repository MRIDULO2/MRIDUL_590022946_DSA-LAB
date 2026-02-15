// 6. Write a C program using array of structures with dynamic memory allocation to store employee details and find the employee with the highest salary.
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;
    struct Employee *e;
    int max_index = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    e = (struct Employee *)malloc(n * sizeof(struct Employee));
    if (e == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        if (e[i].salary > e[max_index].salary)
            max_index = i;
    }
    printf("Employee with Highest Salary:\n");
    printf("ID: %d\n", e[max_index].id);
    printf("Name: %s\n", e[max_index].name);
    printf("Salary: %.2f\n", e[max_index].salary);
    free(e);
    return 0;
}
